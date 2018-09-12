#include <stdio.h>
#include <stdlib.h>

char argv[50];

int main()
{
    printf("> ");
    scanf("%s", argv);
    system(argv);
    return 0;
}
