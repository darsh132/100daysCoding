#include <stdio.h>

int main() {

    int num;
    int result = -1;
    int arr[5] = {10,20,40, 60, 30 };

    printf("Enter a number :");
    scanf("%d", &num);

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == num)
        {
            result = i;
            break;
        }
    }

    printf("Element found at index : %d", result);

    return 0;
}