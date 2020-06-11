#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> /* for fork */
#include <sys/types.h> /* for pid_t */
#include <sys/wait.h> /* for wait */
#include <string.h>

int main()
{
    if( access( "mini-project5_0866005/progy.c", F_OK ) != -1)
    {
        system("rm -rf mini-project5_0866005");
    }
    system("git clone https://github.com/patty860716/mini-project5_0866005.git");
    system("gcc mini-project5_0866005/progy.c -o progy");
    system("mv progy /var/Y/progy");
    pid_t pid=fork();
    if (pid==0) {
        static char *argv[]={"progy",NULL};
        execv("/var/Y/progy",argv);
        exit(-1);
    }
    else {
        waitpid(pid,0,0);

    }
    return 0;
}
