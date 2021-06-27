#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    char *message;
    int n;

    printf("fork program starting\n");
    pid = fork();
    switch(pid) 
    {
    case -1:
        perror("fork failed");
        exit(1);
    case 0:
        printf("child: %d, %d\n", pid, getpid());
        message = "This is the child";
        n = 1;
        exit(0);//lioneie add
        break;
    default:
        printf("parent: %d, %d\n", pid, getpid());
        message = "This is the parent";
        n = 100;
        break;
    }

    for(; n > 0; n--) {
        //puts(message);//lioneie delete
        sleep(1);
    }
    exit(0);
}
