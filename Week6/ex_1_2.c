#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int status[2];
char str1[] = "String", str2[20];

int main()
{
    pipe(status);

    int flag = fork();
    if (flag < 0)
        printf("Error");
    else if (flag > 0)
    {
        close(status[0]);
        write(status[1], str1, sizeof(str1) + 1);
        close(status[1]);
    }
    else
    {
        close(status[1]);
        read(status[0], str2, sizeof(str2));
        close(status[0]);
        printf("String 2 is: %s\n", str2);
    }
    return 0;
}
