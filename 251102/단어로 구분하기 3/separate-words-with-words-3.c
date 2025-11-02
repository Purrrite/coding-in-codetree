#include <stdio.h>
#include <string.h>


char words_list[10][200];

int main()
{
    for (int i = 0; i < 10; i++) 
        scanf("%s", words_list[i]);

    for (int i = 9; i >= 0; i--)
        printf("%s\n", words_list[i]);
}