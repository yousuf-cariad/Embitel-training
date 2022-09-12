#include <stdio.h>
#include <string.h>

int atoi(char* txt)
{
    int sum, digit, i;
    sum = 0;
    for (i = 0; i < strlen(txt); i++) {
        digit = txt[i] - '0';
        sum = (sum * 10) + digit;
    }
    return sum;
}

int main()
{
    char str[5];
    printf("Enter a string value: ");
    scanf("%s", str);
    printf("\nInteger value = %d\n", atoi(str));

    return 0;
}
