#include <stdio.h>
#include <string.h>

int main()
{
    // Please write your code here.
    char string[100];
    char alphabet;

    fgets(string, 100, stdin);
    scanf("%c", &alphabet);

    // printf("%c\n", alphabet);

    int string_length = strlen(string);
    int count = 0;

    for (int i = 0; i < string_length; i++)
        count = (string[i] == alphabet) ? count + 1 : count;

    printf("%d", count);
    return 0;
}