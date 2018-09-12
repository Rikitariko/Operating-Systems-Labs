#include <stdio.h>
#include <stdlib.h>

char argv[50];
i = 0;
int main()
{
    while (i == 0)
    {
        printf("> ");
        scanf("%s", argv);
        system(argv);
    }
}
