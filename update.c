#include <stdio.h>
#include <stdlib.h>
#define SHELLSCRIPT "\
#/bin/bash \n\
sudo\n\
echo 'the update that works on all'\n\
sudo apt update -y\n\
sudo apt upgrade -y\n\
snap refresh -y\n\
sudo dnf check-update -y\n\
sudo dnf upgrade -y\n\
sudo yum update  -y\n\
pacman -Syu -y\n\
zypper up -y\n\
"
int main()
{
    puts("updating everything (there will be erros)");
    system(SHELLSCRIPT);
        puts("done");
    return 0;
}