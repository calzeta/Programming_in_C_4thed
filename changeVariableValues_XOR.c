#include <stdio.h>

int main() {
    int i1 = 0;
    int i2 = 0;

    i1 = 10;
    i2 = 20;

    puts("After Exclusive OR");
    printf("i1 = %d ----  i2 = %d\n",i1,i2);

    i1 ^= i2;
    i2 ^= i1;
    i1 ^= i2;

    puts("Before Exclusive OR");
    printf("i1 = %d ----  i2 = %d\n",i1,i2);
    return 0;
}