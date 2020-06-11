# mini-project5_0866005
gcc px.c -o px 
px's owner -> X
sudo mv px /usr/local/bin/px
1. Only UserX is allowed to execute Program X
    owner /{,usr/}bin/ping mixr,
    owner /etc/modules.conf r,
   or chmod 744 /usr/local/bin/px
2. Program Y is only allow  to read/write files under /var/Y/
    audit deny owner @{HOME}/.* mrwkl,
    audit deny owner @{HOME}/.*/ rw,
    audit deny owner @{HOME}/.*/** mrwkl,
3. Program Y is not allowed to create or accept network connections.
    deny network raw,
    deny network inet6,
    
   
   
