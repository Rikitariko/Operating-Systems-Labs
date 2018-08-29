#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <limits.h>

int x = INT_MAX;
float y = FLT_MAX;
double z = DBL_MAX;

int main()
{
    printf("%d %d %d \n", sizeof(x), sizeof(y), sizeof(z));
    printf("%d %f %lf", x, y, z);
}
