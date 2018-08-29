#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap (int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("%d %d", x, y);
}

