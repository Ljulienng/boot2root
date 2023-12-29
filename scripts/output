ls
apt-get update
apt-get install apache2
apt-get install mysql-server libapache2-mod-auth-mysql php5-mysql
mysql_install_db 
apt-get install php5 libapache2-mod-php5 php5-mcrypt
cd
ls
cd /var/www/
ls
vim info.php
ifconfig
ls
cp -r /tmp/html_non_forum/* .
ls
rm info.php 
ls
ls -als
chown -R www-data:www-data *
ls
ls -als
ls
cp -R /tmp/forum/ .
ls
ls -als
chown -R www-data:www-data forum/
apt-get install phpmyadmin apache2-utils
cat /var/log/apache2/access.log 
cat /var/log/apache2/error.log 
service apache2 restart
ls
cat /var/log/apache2/error.log 
vim forum/config/db_settings.php 
ls
cd forum/
ls
rm -rf install/
ls
ls -als
chmod -R 777 templates_c/
cd update/
ls
rm *
ks
cd ..
rm LICENSE 
rm README 
rm CHANGELOG 
ls
a2enmod ssl
service apache2 restart
make-ssl-cert /usr/share/ssl-cert/ssleay.cnf /etc/ssl/private/localhost.pem
openssl req -x509 -nodes -days 365 -newkey rsa:1024 -out /etc/apache2/server.crt -keyout /etc/apache2/server.key
cd /etc/apache2/
ls
cd sites-available/
ls
cp default-ssl ssl
vim ssl 
vim default
service apache2 restart
vim default
service apache2 restart
apt-get install vsftpd
ls
cd
ls
vim /etc/vsftpd.conf 
services vsftpd restart
service vsftpd restart
vim /etc/vsftpd.conf 
service vsftpd restart
cat /var/log/vsftpd.log
touch /var/log/vsftpd.log
service vsftpd restart
cat /var/log/vsftpd.log
reboot
cd
cd /etc/apache2/
ls
cd sites-available/
vim default
scp gmu@borntosec.ddns.net:/etc/apache2/sites-available/default .
ls ../sites-enabled/
ls
vim  default
/etc/init.d/apache2 restart
vim /etc/host
vim /etc/hosts
/etc/init.d/apache2 restart
vim default
/etc/init.d/apache2 restart
clear
cd /etc/phpmyadmin/
ls
vim config.inc.php 
/etc/init.d/apache2 restart
ls
mv apache.conf apache.conf.old
mv apache.conf.old apache.conf
tail /var/log/apache2/error.log 
cd /usr/share/
ls
cd phpmyadmin/
ls
mv /etc/apache2/conf.d/phpmyadmin.conf /root
/etc/init.d/apache2 restart
ls
uname -a
cat /etc/hosts
cd
libdb4.8 db4.8-util postfix procmail sasl2-bin
apt-get install libdb4.8 db4.8-util postfix procmail sasl2-bin
dpkg-reconfigure postfix
apt-get install dovecot-common dovecot-imap
apt-cache search dovecot
apt-get install dovecot-common dovecot-imapd
reboot
cd /etc/ssl/private/
ls
vim /etc/vsftpd.conf 
service vsftpd restart
service vsftpd start
ps aux
ps aux | grep vsf
vim /etc/vsftpd.conf 
service vsftpd start
cat /var/log/vsftpd.log 
cat /var/log/syslog
service vsftpd start
cat /var/log/syslog
ls
vim /etc/vsftpd.conf 
service vsftpd start
cat /var/log/syslog
vim /etc/vsftpd.conf 
service vsftpd start
vim /etc/vsftpd.conf 
cat /var/log/syslog 
vim /etc/vsftpd.conf 
cat /var/log/syslog 
service vsftpd start
cat /var/log/syslog 
/usr/sbin/vsftpd 
vim /etc/vsftpd.conf 
/usr/sbin/vsftpd 
vim /etc/vsftpd.conf 
/usr/sbin/vsftpd 
service vsftpd start
vim /etc/vsftpd.conf 
service vsftpd restart
cat /var/log/vsftpd.log 
c
cd
ls
ls -als
rm -rf phpmyadmin.conf 
ls
ls -als
cd ..
ls
cd home/
ls
mkdir README
cd README/
ls
touch password
vim password 
cd ..
ls
mv README/ LOOKATME
cd LOOKATME/
ls
vim password 
ls
cd ..
ls
cat LOOKATME/password 
adduser lmezard
vim /etc/ssh/sshd_config 
service ssh restart
exit
services vsftpd restart
services vsftp restart
service vsftp restart
service vsftpd restart
vim /etc/vsftpd.conf 
cd
cd /home/
ls
cd lmezard/
ls
cd ..
ls
chmod -R a-x lmezard/
vim /etc/vsftpd.conf 
service vsftpd restart
/usr/sbin/vsftpd 
vim /etc/vsftpd.conf 
service vsftpd restart
vim /etc/vsftpd.conf 
reboot
dpkg-reconfigure postfix
ls
cd
ls
mkdir /etc/postfix/ssl
cd /etc/postfix/ssl
cp /etc/apache2/server.key .
cp /etc/apache2/server.crt .
ls
vim /etc/postfix//main.cf 
ls /etc/apache2/
vim /etc/postfix//main.cf 
cd ..
vim main.cf 
/etc/init.d/postfix restart
vim main.cf 
telnet localhost smtp
cat /etc/group | grep sasl
adduser postfix sasl
vim main.cf 
/etc/init.d/postfix restart
vim main.cf 
ls
cd sasl/
ls
echo 'pwcheck_method: saslauthd' >> /etc/postfix/sasl/smtpd.conf
echo 'mech_list: plain login' >> /etc/postfix/sasl/smtpd.conf 
man adduser
man useradd
vim main.cf 
vim ../main.cf 
cd ;;/ssl
cd ../ssl
ls
vim ../main.cf 
/etc/init.d/postfix restart
sudo apt-get install libsasl2-modules libsasl2-modules-sql libgsasl7 libauthen-sasl-cyrus-perl sasl2-bin libpam-mysql
kdir -p /var/spool/postfix/var/run/saslauthd
mkdir -p /var/spool/postfix/var/run/saslauthd
rm -fr /var/run/saslauthd
ln -s /var/spool/postfix/var/run/saslauthd /var/run/saslauthd
chown -R root:sasl /var/spool/postfix/var/
chmod 710 /var/spool/postfix/var/run/saslauthd
adduser postfix sasl
vim /etc/default/saslauthd 
ls
/etc/init.d/postfix restart
/etc/init.d/saslauthd start
telnet localhost 25
ls
/etc/init.d/apache2 restart
/etc/init.d/saslauthd start
/etc/init.d/postfix start
cat /etc/group
ls
su lmezard
ls
cd ..
ls -als
cd lmezard/
ls -als
cd ..
chmod -R 755 lmezard/
ls
su lmezard
ls
chmod -R a-x lmezard/
ls
chmod -R a-x lmezard/
vim /etc/vsftpd.conf 
service vsftpd restart
/usr/sbin/vsftpd 
vim /etc/vsftpd.conf 
/usr/sbin/vsftpd 
service vsftpd restart
vim /etc/vsftpd.chroot_list
touch /etc/vsftpd.chroot_list
setenforce 0
getenforce
grep lmezard /etc/passwd
cd lmezard/
ls
rm -rf *
ls -als
rm -rf *.
ls
ls -als
rm .bash
rm .bash*
ls -als
rm .profile 
cd ..
ls -l
chmod -R 755 lmezard/
ls -als
vim /etc/vsftpd.conf 
/usr/sbin/vsftpd 
vim /etc/vsftpd.conf 
ls -als
chmod a-x -R lmezard/
cd lmezard/
ls
mkdir upload
getent groups mail
getent group mail
ls
chown lmezard upload/
ls -als
chown lmezard:lmeard upload/
chown lmezard:lmezard upload/
ls -als
cd /
ls
chmod a-x home/
grep lmezard /etc/passwd
ls
cd home/
ls
su lmezard
ls
ls -als lmezard/
ls -als
chmod +x lmezard/
ls
ls -als
su lmezard
ls -als
chmod +x -R lmezard/
su lmezard
ls
cd ..
ls -als
chmod +x -R home/
su lmezard
cd home/
ls
ls -als
chmod 555 -R lmezard/
ls
cp /tmp/fun lmezard/.
cd lmezard/
ls
ls -als
rm -rf .bash_history 
chown lmezard:lmezard fun 
chown 755 fun 
ls
vim README
ls
chown lmezard:lmezard README 
chown 755 README 
rm -rf upload/
ls
adduser
adduser laurie
ls
cd ..
ls
su laurie
cd /tmp/
ls
cp bomb /home/laurie
cd 
su laurie
cd /home/laurie
ls
chown laurie:laurie bomb 
chmod 755 bomb 
su laurie
ls
vim README
ls
chmod 755 README 
ls
chown laurie laurie README 
chown laurie:laurie README 
ls
ls -als
cd
ls
adduser thor
ls
cd ../tmp/
cd
ls
cd /home/thor/
ls
cp /tmp/turtle .
chmod 755 turtle 
chown thor:thor turtle 
ls
cat turtle 
vim turtle 
vim README
ls
chmod 755 README 
chown thor:thor README 
ls
su thor
adduser zaz
646da671ca01bb5d84dbb5fb2238dc8e
cd ../zaz
ls
vim main.c
gcc main.c 
./a.out 
./a.out  4
rm a.out 
gcc -m32 -z execstack -Zl,-z,norelro -fno-stack-protector main.c -o exploit_me
gcc -m32 -z execstack -Wl,-z,norelro -fno-stack-protector main.c -o exploit_me
vim main.c
gcc -m32 -z execstack -Wl,-z,norelro -fno-stack-protector main.c -o exploit_me
ls
./exploit_me 
chmod 6700 exploit_me 
ls
ls -als
su zaz
chmod 6711 exploit_me 
exit
vim /etc/postfix/master.cf 
/etc/init.d/postfix restart
squirrelmail-configure 
/etc/init.d/postfix restart
squirrelmail-configure 
/etc/init.d/apache2 restart
/etc/init.d/postfix restart
tail /var/log/mail.err
/usr/local/sbin/authdaemon stop
tail /var/log/mail.err
cd /var/log
ls
tail mail.log 
adduser ft_root mail
getent group mail
/etc/init.d/postfix restart
vim /etc/dovecot/dovecot.conf 
/etc/init.d/dovecot restart
vim /etc/squirrelmail/config.php 
/etc/init.d/apache2 restart
ls
tail mail.log 
tail mail.err
adduser gmy@localhost
adduser --force-badname gmy@localhost
deluser gmy@localhost
adduser --force-badname laurie@borntosec.net
vim /etc/squirrelmail/config.php 
/etc/init.d/apache2 restart
/etc/init.d/postfix restart
/etc/init.d/dovecot restart
vim /etc/squirrelmail/config.php 
/etc/init.d/dovecot restart
/etc/init.d/postfix restart
/etc/init.d/apache2 restart
vim /etc/squirrelmail/config.php 
cd /usr/share/squirrelmail/config
ls
perl conf.pl 
vim /etc/squirrelmail/config.php 
perl conf.pl 
cat /var/log/mail.err 
cat /var/log/mail.log 
cat /var/log/mail.err 
cat /var/log/mail.log 
vim /etc/dovecot/dovecot.conf 
/etc/init.d/dovecot restart
/etc/init.d/dovecot status
cat /var/log/mail.err 
cat /var/log/mail.log 
vim /etc/dovecot/dovecot.conf 
/etc/init.d/dovecot restart
vim /etc/dovecot/dovecot.conf 
/etc/init.d/dovecot restart
vim /etc/dovecot/dovecot.conf 
/etc/init.d/dovecot restart
cat /var/log/mail.err 
cat /var/log/mail.log 
cat /var/log/mail.err 
cat /var/log/auth.log 
cat /var/log/mail.err 
cat /var/log/mail.log
openssl s_client
openssl laurie
openssl s_client laurie
ls -ali /etc/postfix/ssl/
chmod 0444 /etc/postfix/ssl/*
telnet localhost:995
telnet localhost 995
telnet localhost 465
clear
ls
apt-get remove --purge squirrelmail
apt-get remove --purge ibdb4.8 db4.8-util postfix procmail sasl2-bin.
apt-get remove --purge ibdb4.8 db4.8-util postfix procmail sasl2-bin
apt-get remove --purge dovecot
cd
cd -
cd
ls /etc
apt-get remove --purge dovecot
apt-get remove --purge dovecot-common dovecot-imapd
reboot
su zaz
apt-get install gdb
exit
su zaz
cd /home/zaz
ls
chmod 6700 exploit_me 
chown root:zaz
chown root:zaz exploit_me 
ls
ls -als
exit
su zaz
cd /home/zaz
ls
chmod 7711 exploit_me 
ls
su zaz
chmod 7755 exploit_me 
su zaz
echo "0" | sudo tee /proc/sys/kernel/randomize_va_space 
cat /proc/sys/kernel/randomize_va_space 
echo "kernel.randomize_va_space = 0" > /etc/sysctl.d/01-disable-aslr.conf
exit
su zaz
ls
cd /home/zaz/
ls
rm main.c 
rm t.c 
ls
exit
apt-get install postfix
apt-get install squirrelmail
apt-get remove --purge squirrelmail
apt-get autoremove
cd /etc/postfix/
ls
vim main.cf 
ls sasl/
sudo apt-get install bsd-mailx dovecot-core dovecot-imapd dovecot-pop3d dovecot-mysql postfix
cat /etc/group | grep mail
/etc/init.d/apache2 restart
sudo apt-get remove --purge bsd-mailx dovecot-core dovecot-imapd dovecot-pop3d dovecot-mysql postfix
sudo apt-get install bsd-mailx dovecot-core dovecot-imapd dovecot-pop3d dovecot-mysql postfix
sudo apt-get remove --purge bsd-mailx dovecot-core dovecot-imapd dovecot-pop3d dovecot-mysql postfix
ls
cd
ls /etc
sudo apt-get install squirrelmail postfix
ls
clear
ls
cat /var/log/mail.err 
cat /var/log/mail.log 
sudo apt-get remove --purge squirrelmail postfix
sudo apt-get remove --purge bsd-mailx dovecot-core dovecot-imapd dovecot-pop3d dovecot-mysql postfix
clear
apt-get autoremove
apt-get install postfix postfix-mysql dovecot-core dovecot-imapd dovecot-lmtpd dovecot-mysql
apt-get install squirrelmail
cat /var/log/mail.err 
squirrelmail-configure 
clear
ls
clear
ls
vim /etc/dovecot/conf.d/10-ssl.conf 
vim /etc/dovecot/conf.d/10-master.conf 
/etc/init.d/dovecot restart
su ft_root
vim /etc/dovecot/dovecot.conf 
/etc/init.d/dovecot restart
clear
su laurie@borntosec.net
useradd laurie@borntosec.net mail
adduser laurie@borntosec.net mail
id zaz
cd /home/ft_root/
ls
ls mail/
cd /var/mail/
ls
ls -ali
vim /etc/dovecot/dovecot.conf 
/etc/init.d/dovecot restart
ls
ls -ali
vim /etc/dovecot/dovecot.conf 
cat laurie\@borntosec.net 
cat ft_root 
ls
mv ft_root laurie\@borntosec.net 
ls
vim laurie\@borntosec.net 
ls -ali
chown laurie\@borntosec.net:mail laurie\@borntosec.net 
ls
ls -ali
cd ../www/forum/
ls
ls -ali
cd templates_c/
ls
clear
ls
clear
cat /var/log/apache2/error.log 
cat /var/log/apache2/access.log 
ls
cat /var/log/auth.log 
cat /var/log/mysql.err 
cat /var/log/mysql.log
cat /var/log/mysql/error.log 
df -h
clear
cd
cd /etc/mysql/
ls
vim my.cnf 
/etc/init.d/mysql restart
/etc/init.d/mysql status
/etc/init.d/mysql start
at /var/log/mysql.err 
vim my.cnf 
/etc/init.d/mysql start
cd /var/log/mysql
ls
cat error.log 
cd ..
cat mysql.log 
cat mysql.err 
su mysql
id mysql
su mysql
cd
cd /var/www/
ls
ls -ali
/etc/init.d/mysql restart
aa-status 
/etc/init.d/apparmor stop
/etc/init.d/apparmor status
aa-status teardown
cd /var/www/
ls
cd fo
cd forum/
ls
vim config/.htaccess 
ls
cat /var/log/mail.log 
ls
cd /home/
ls
chown -R www-data:www-data LOOKATME/
cd /var/www/
ls
cd forum/
ls
cd templates_c/
ls
cd ..
ls
ls -als
cd templates_c/
ls
cd ..
ls -als
cd www/
ls -als
stat f
stat forum
chmod 755 forum/
stat forum/
chmod 755 -R forum/
cd forum/
ls
chmod 777 templates_c/
ls -als
cd ..
ls -als
cd ..
ls -als
cd ..
cat /var/log/syslog 
aa-status
/etc/init.d/apparmor stop
update-rc.d -f apparmor remove
apt-get --purge remove apparmor
apt-get --purge remove apparmor-utils libapparmor-perl
apt-get --purge remove libapparmor
reboot
ls /home/
cd ../LOOKATME/
ls
cat password 
cd ..
ls -ali
mount
cd thor/
ls
ls -ali
cat README 
cat turtle 
cd ../lmezard/
ls
cat README 
cat fun 
cd ../thor/
ls
cd ../zaz/
ls
cd ../laurie
ls
cat README 
./bomb 
ls
cd ..
ls
ls gmy\@localhost/
id gmy\@localhost/
cat /etc/group | grep gmy
rm gmy\@localhost/
rm -rf gmy\@localhost/
ls
ls -ali
getent group 
cat /etc/group
deluser ft_root mail
cat /etc/group
ls
ls -ali
chmod -R  750 ft_root/ 
ls -ali
chmod -R  750 .
ls -ali
su laurie
cd laurie
ls 
su lmezard
ls
cd..
cd ..
ls
ls -ali
chmod 751 .
su laurie
vim zaz/.bashrc 
su zaz
vim thor/.bashrc 
ls
vim laurie/.bashrc 
ls
ls -ali laurie\@borntosec.net/
ls
cd lmezard/
ls
cd /etc/vsftpd.conf 
vim /etc/vsftpd.conf 
cat /var/log/vsftpd.log 
cd ..
chown -R lmezard:root lmezard/
cat /var/log/vsftpd.log 
ps aux | grep vsf
cd /etc/
ls
vim vsftpd.chroot_list 
lscd /home
cd /home
chown -R lmezard:lmezard lmezard/
ls
chown a+w lmezard/
chmod a-w lmezard/
vim /etc/vsftpd.conf 
chmod a-w /tmp/
su zaz
ls
cd ..
ls
cd /home
ls
su zaz
cal
cd ..
ls -ali
chown www-data:root /home
chmod 771 /home
cd home/
ls
cd /var/www/forum/templates_c/
ls
rm phpbackdoor.php 
ls
cd
cd /home/ft_root/rem/
ls
cd rem
ls
dpkg -i remastersys_3.0.4-2_all.deb 
apt-get -f install
dpkg -i remastersys_3.0.4-2_all.deb .
apt-get update
apt-get upgrade
dpkg -i remastersys_3.0.4-2_all.deb .
dpkg -i remastersys_3.0.4-2_all.deb
apt-get -f install
ls
mkdor old
mkdir old
mv remastersys_3.0.4-2_all.deb old/
ls
vim remastersys.conf 
vim issue
vim issue.net 
ls
cp issue /etc/
cp issue.net /etc/
ls
mv issu* old/
ls
cp remastersys.conf /etc/
mv remastersys.conf old/
cd remastersys/
ls
vim remastersys.version 
ls
cd preseed/
ls
vim custom.seed 
ls
cd ..
ls
cd plymouth/
ls
cd ..
cd isolinux/
ls
vim isolinux.cfg.vesamenu 
ls
cd ..
ls
cd customisolinux/
ls
cd ..
ls
cd ..
ls
cp -R remastersys /etc/
LS
ls
mv remastersys/ old/
ls
rm -rf /etc/update-motd.d/*
ls
cp blacklist.conf /etc/modprobe.d/
mv blacklist.conf old/
ls
cat failsafe.conf 
vim failsafe.conf 
ls/etc
ls /etc
cd /etc/initramfs-tools/scripts/init-bottom/
ls
cd ..
ls
ls init-premount/
ls local-bottom/
cd //
cd /etc
ls
cd init
ls
cp /home/ft_root/rem/rem/failsafe.conf .
ls
vim /lib/plymouth/themes/ls
vim /lib/plymouth/themes/ubuntu-text/ubuntu-text.plymouth
ls
vim mysql.conf 
ct hostname.conf 
cat hostname.conf 
ls
vim plymouth-splash.conf 
cd ..
ls
ssh ft_root@localhost
vim ssh/sshd_config 
cd /usr/share/initramfs-tools/scripts/
ls
cd casper-bottom/
ls
vim 15autologin 
ls
vim 26disable_user_menu 
ls
vim 15autologin 
vim 25configure_init 
mv 25configure_init 25configure_init.old
vim 25configure_init
vim /usr/bin/remastersys
mv /usr/bin/remastersys /usr/bin/remastersys.old
vim /usr/bin/remastersys
reboot
clear
cat /etc/issue.net 
clear
vim /etc/ssh/sshd_config 
reboot
ls
ls -als
rm ft_root 
ls
cd /usr/share/initramfs-tools/scripts/
ls
vim init-top/
vim /etc/remastersys.conf 
vim /usr/bin/remastersys
ls
cd casper
cd casper-bottom/
ls
ls -als
ls -als | grep login
vim 15autologinautologin
vim 15autologin 
vim /usr/bin/remastersys
ls
vim 25adduser 
ls -als
stats 26disable_user_menu 
stat 26disable_user_menu 
chmod 0755 15autologin 
ls
chmod 0755 25configure_init
ls
chmod 0755 25adduser 
ls
cd ..
ls
ls -als
vim casper
ls
vim /usr/bin/remastersys
ls
vim /tmp/remastersys/remastersys/remastersys.log 
vim /usr/bin/remastersys
remastersys backup
cd /tmp/remastersys/remastersys/
ls
cd -
clear
ls
cd /usr/share/initramfs-tools/scripts/
ls
scp random@192.168.1.30:/usr/share/initramfs-tools/scripts/casper-bottom/ .
scp random@192.168.1.30:4242/usr/share/initramfs-tools/scripts/casper-bottom/ .
scp -P4242 random@192.168.1.30:/usr/share/initramfs-tools/scripts/casper-bottom/ .
scp -P4242 -r random@192.168.1.30:/usr/share/initramfs-tools/scripts/casper-bottom/ .
remastersys clean
remastersys backup
cd
cd /usr/bin/remastersys
vim /usr/bin/remastersys
cd /tmp/remastersys/remastersys/
ls
cd dummysys/
ls
cd etc/
ls
cd initramfs-tools/
ls
cd scripts/
ls
cd ../../../
ls
cd /
cd usr/share/initramfs-tools/
ls
cd scripts/
ls
cd casper-bottom/
ls
vim 25configure_init
remastersys clean
remastersys backup
who -u | grep -v root | cut -d ' ' -f 1 | uniq | wc -l
who -u | grep -v root | cut -d ' ' -f 1 | uniq 
who -u | grep -v root 
who -u 
id ft_root
cat /etc/init/tty1.conf 
cd /tmp/remastersys/remastersys/
ls
cd dummysys/
ls
cd etc/
cd init
ls
vim tty1.conf 
nmmap -sS -n -p- 192.168.1.8
nmap -sS -n -p- 192.168.1.8
reboot
cd /etc
vim casper.conf 
man passwd
passwd -l ft_root
remastersys clean

passwd -u ft_root
vim rc.local 
remastersys clean
exit
vim /usr/share/initramfs-tools/scripts/casper-bottom/15autologin 
remastersys clean
remastersys backup
cat /tmp/remastersys/remastersys/remastersys.log 
vim /tmp/remastersys/remastersys/remastersys.log 
ls
vim /etc/remastersys.conf 
vim /usr/bin/remastersys
ls
cd /usr/share/initramfs-tools/scripts/
ls
vim casper
ls
vim casper-functions 
ls
vim functions 
ls
vim casper-helpers 
ls
cd casper-premount/
ls
cd ..
cd casper-bottom/
ls
vim 15autologin 
ls
cd /
ls
cd /etc/remastersys.conf 
vim /etc/remastersys.conf 
vim ~/.vimrc
vim /usr/share/vim/vimrc
vim /etc/vim/vimrc.tiny 
vim /etc/vim/vimrc
vim /etc/remastersys/remastersys.version 
vim /usr/bin/remastersys
ls
cd /usr/share/initramfs-tools/
ls
cd scripts/
ls
vim casper
vim /etc/casper.conf 
ls
vim casper-
vim casper-helpers 
ls
grp "login"
gerp "login"
grep "login"
cat * | grep "login"
cat */* | grep "login"
vim /etc/pam.d/login 
ls
cd init-bottom/
ls
cd ..
cd casper-bottom/
ls
vim 15autologin 
remastersys clean
remastersys backup
ls
ls -als
vim 15autologin 
remastersys clean
remastersys backup
vim 15autologin 
vim 25adduser 
ls
vim
ls
cd ..
ls
cd casper-premount/
ls
vim 10driver_updates 
ls
cd ..
ls
vim init-bottom/plymouth 
vim init-bottom/udev 
vim /usr/bin/remastersys
vim /boot/initrd.img-3.2.0-91-generic-pae 
vim /usr/bin/remastersys
remastersys clean
remastersys backup
remastersys clean
vim casper-bottom/15autologin 
remastersys clean
remastersys backup
vim casper-bottom/15autologin 
vim /usr/bin/remastersys
remastersys clean
remastersys backup
cd 
ls
pwd
ls\
ls
cd /home/zaz/
ls
ls -als
chmod 6755 exploit_me 
ls
ls -als
cd .
cd ..
ls
ls -als
cd /tmp/
ls
cd remastersys/
ls
cd remastersys/
ls
car remastersys.log 
cat remastersys.log 
cd
ls
remastersys clean
vim /usr/bin/remastersys
remastersys clean
remastersys backup
vim /usr/bin/remastersys
exit
vim /usr/bin/remastersys
ls
ls mail/
rm -rf rem
rm -rf rem2/
ls
ls Desktop/
cd ..
ls
ls -ali
cd laurie
ls -ali
vim README 
cd ../laurie\@borntosec.net/
ls
ls -ali
cd mail/
ls
cd ../../
ls
cd lmezard/
ls
ls -ali
vim README 
ls -ali
cd ..
ls -ali
vim /root/README
cd LOOKATME/
ls
ls -ali
cd ..
ls
cd thor/
ls -ali
vim README 
cd ..
cd zaz/
ls
ls -ali
su lmezard
chmod 6750 exploit_me 
su lmezard
ls -ali
vim /etc/ssh/sshd_config 
ssh laurie\@borntosec.net@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ls -ali ../
ssh laurie\@borntosec.net@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ssh laurie\@borntosec.net@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ssh laurie\@borntosec.net@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ssh laurie\@borntosec.net@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ssh laurie\@borntosec.net@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ssh laurie\@borntosec.net@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ssh laurie\@borntosec.net@localhost
ssh zaz@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ssh zaz@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ssh zaz@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ssh zaz@localhost
vim /etc/ssh/sshd_config 
/etc/init.d/ssh restart
ssh laurie\@borntosec.net@localhost
ssh zaz@localhost
ssh thor@localhost
ssh laurie@localhost
ssh ft_root@localhost
ssh lmezard@localhost
man ftp
ftp
ftp localhost
rm -rf /var/log/*
ls
passwd ft_root
vim /etc/passwd
vim /etc/shadow
exit
passwd
exit
ls
cat /etc/ssh/sshd_config 
echo "Lol" > /tmp/
echo "Lol" > /tmp/t
rm /tmp/t
ls
exit
cd 
ls
rm test 
cat /home/zaz/.bash_history 
echo "" > /home/zaz/.bash_history 
echo "" > /home/laurie/.bash_history 
echo "" > /home/laurie\@borntosec.net/.bash_history 
echo "" > /home/lmezard/.bash_history 
echo "" > /home/thor/.bash_history 
cd /home/zaz/
ls -ali
cat .profile 
cd .cache/
ls
ls -ali
cat motd.legal-displayed 
cd ..
cat .bash_logout 
ls
cd /tmp
ls
remastersys backup
exit
mkdir /var/log/apache2
remastersys clean
remastersys backup
ftp
ftp localhost
ifconfig
exit
