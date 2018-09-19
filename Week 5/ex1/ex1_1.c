#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* thr(void *args)
{
    printf("Thread %d!\n", args);
}

pthread_t thr_id;
int n = 22;
int main()
{
    for (int i = 1; i <= n; i++)
    {
        pthread_create(&thr_id, NULL, thr, (void*)i);
        pthread_join(thr_id, NULL);
    }
}
 
