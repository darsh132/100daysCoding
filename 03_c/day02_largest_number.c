#include <stdio.h>

int main() {
    int a, b, c;
    int largest;

    printf("Enter three numbers :\n");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;
    
    if(b > largest) {
        largest = b;
    }
    
    if(c > largest) {
        largest = c;
    }

    printf("Largest number is %d\n", largest);
    
    return 0;
}