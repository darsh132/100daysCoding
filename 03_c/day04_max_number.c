#include <stdio.h>

int max(int a, int b)
{
    if(b > a)
    {
        return b;
    }

    return a;
}
int main() {
    int num, num1;

    printf("Enter two numbers : ");
    scanf("%d %d", &num, &num1);

    int result = max(num, num1);

    printf("%d\n", result);

    return 0;
}