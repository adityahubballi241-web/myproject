#include <sys/types.h>
#include <unitstd.h>
#include <stdio.h>"
#include <sys/wait.h>

int main() {
    pid_t p;
    p=fork();
    if(p==0)
    {
        printf("child process");
        execl("/bin/date","date",NULL);

    }
        else
        {
        wait(NULL);
        printf("the chiled exeted now is%d",p);
        printf("pernt process id is %d\n",getpid());
        }
        return 0;
}