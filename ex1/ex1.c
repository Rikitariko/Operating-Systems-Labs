#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t pid = fork();
    if (pid == 0)
        printf("Hello from child [PID - %d]\n", pid);
    else if (pid > 0)
        printf("Hello from parent [PID - %d]\n", pid);

    return 0;
}
