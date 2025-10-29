#include <stdio.h>
#include <string.h>

int main()
{
    // Please write your code here.
    char string[100];
    fgets(string, 100, stdin);
    scanf("%s", string[100]);

    for (int i = 2; i < 10; i++)
        printf("%c", string[i]);

    printf("\n");
    return 0;
}