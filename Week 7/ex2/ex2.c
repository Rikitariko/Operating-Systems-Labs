#include <stdio.h>
#include <stdlib.h>

int *arr;
int n;

int main() {
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        arr[i] = i;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
}
