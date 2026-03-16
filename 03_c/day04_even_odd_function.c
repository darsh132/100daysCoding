#include <stdio.h>

char* checkEvenOdd(int number)
{
    if(number % 2 == 0)
    {
        return "Even";
    }

    return "Odd";
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    char* result = checkEvenOdd(num);

    printf("%s\n", result);

    return 0;
}