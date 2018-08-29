#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;

void printStars (int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= 2 * (i - 1) + 1; j++)
            printf("*");

        for (j = 1; j <= n - i; j++)
            printf(" ");

        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    printStars(n);
}
