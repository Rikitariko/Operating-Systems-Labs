#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min(int x, int y)
{
    return (x < y)? x : y;
}

void a_realloc(int *ptr, int size)
{
    if (ptr == NULL)
        ptr = malloc(size);
    
    if (size == 0)
        free(ptr);
    
    int *newPtr = malloc(size);
    for (int i = 0; i < min((int)sizeof(ptr) / (int)sizeof(int), size / (int)sizeof(int)); i++)
        newPtr[i] = ptr[i];
    
    ptr = newPtr;
}

int main()
{
    int* a1 = malloc(10 * sizeof(int));
    
    for(int i = 0; i < 10; i++)
    {
		a1[i] = 100;
		printf("%d ", a1[i]);
	}
    printf("\n");
    
	a_realloc(a1, 20 * sizeof(int));
	
    for(int i = 0; i < 20; i++)
		printf("%d ", a1[i]);
	printf("\n");
}
