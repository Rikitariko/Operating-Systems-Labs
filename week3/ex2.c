#include <stdio.h>

int n, a[10000];

void bubble_sort(int *a, int n)
{
    int i, j, x, y;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n - i; j++)
            if (a[j] > a[j + 1])
            {
                x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
}

int main()
{
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    bubble_sort(a, n);

    for (i = 1; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}
