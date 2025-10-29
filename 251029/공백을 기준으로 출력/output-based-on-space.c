#include <stdio.h>
#include <string.h>

char string1[101], string2[101];

int main()
{
    fgets(string1, 101, stdin);
    fgets(string2, 101, stdin);

    int string1_length = strlen(string1);
    int string2_length = strlen(string2);

    for (int i = 0; i < string1_length; i++)
        if (string1[i] != ' ' && string1[i] != '\n')
            printf("%c", string1[i]);

    for (int i = 0; i < string2_length; i++)
        if (string2[i] != ' ' && string2[i] != '\n')
            printf("%c", string2[i]);

    return 0;
}