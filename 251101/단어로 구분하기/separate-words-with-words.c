#include <stdio.h>
#include <string.h>

char string[201];

int main()
{
    fgets(string, 201, stdin);
    int string_length = strlen(string);

    for (int i = 0; i < string_length; i++) {
        if (string[i] == ' ')
            printf("\n");
        else
            printf("%c", string[i]);
    }
    return 0;
}