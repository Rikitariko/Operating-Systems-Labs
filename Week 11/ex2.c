#include <stdio.h>
#include <unistd.h>

int buf_size = 5;
int main() 
{   
    setvbuf(stdout, NULL, _IOFBF, buf_size);
    printf("H");
    sleep(1);
    printf("e");
    sleep(1);
    printf("l");
    sleep(1);
    printf("l");
    sleep(1);
    printf("o");
    sleep(1);
}
