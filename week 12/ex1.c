#include <stdio.h>

char random[30];

int main() {
    FILE *fl = fopen("/dev/random", "r");

    fgets(random, 21, fl);
    printf("%s", random);
}
