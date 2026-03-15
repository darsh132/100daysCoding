#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int temp = 0;

    temp = b;
    b = a;
    a = temp;

    printf("Value of a : %d\n", a);
    printf("Value of b : %d\n", b);
}