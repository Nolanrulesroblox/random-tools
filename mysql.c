#include <stdio.h>
#include <stdlib.h>
#define SHELLSCRIPT "\
#/bin/bash \n\
sleep 10;\n\
sudo /etc/init.d/mysql stop \n\
sudo apt-get remove --purge mysql-server mysql-client mysql-common -y;\n\
sudo rm -r /var/lib/mysql ;\n\
sudo rm -r /etc/mysql ; \n\
sudo apt-get autoremove ; \n\
sudo apt-get autoclean ;\n\
sudo apt update;\n\
sudo apt upgrade -y;\n\
sudo apt-get install mysql-server -y;\n\
"
int main()
{
    puts("Running Mysql Reinstall. Press CTRL+C to cancel within the next 10 seconds to stop");
    system(SHELLSCRIPT);
        puts("done");
    return 0;
}