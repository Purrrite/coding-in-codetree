#include <stdio.h>
#include <string.h>

char string[201];
int is_odd = 1;
int space_count = 1;

int main()
{
    fgets(string, 201, stdin);
    int string_length = strlen(string);

    for (int i = 0; i < string_length; i++)
    {
        if (string[i] == ' ')
        {
            is_odd = (is_odd == 1) ? 0 : 1; //true false 같은 느낌
            if (is_odd) 
                printf("\n");
        }
        else if (is_odd) {
            printf("%c", string[i]);
        }

    }
    return 0;
}