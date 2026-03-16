#include <stdio.h>

int main() {

    int arr[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    printf("Numbers entered:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}