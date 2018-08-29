#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[];
int i, j;

void swap (char *x, char *y)
{
    char z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    scanf("%s", str);

    for (i = 0, j = strlen(str) - 1; i <= j; i++, j--)
        swap(&str[i], &str[j]);

    printf("%s", str);
}
