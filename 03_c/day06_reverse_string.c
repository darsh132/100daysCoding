#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    char result[100];
    printf("Enter a string : ");
    scanf("%s", str);

    int length = strlen(str);
    int j = 0;

    for(int i = length - 1; i >= 0; i--)
    {
        result = result + str[i];
        j++;
    }

    result[j] '\0';

    printf("Reversed string: %s\n", result);

    return 0;
}