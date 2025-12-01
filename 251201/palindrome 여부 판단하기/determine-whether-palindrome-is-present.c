#include <stdio.h>
#include <string.h>

char A[101];

int is_palindrome(char *str)
{
    int str_len = 0;

    for (int i = 0; *(str + i) != '\0'; i++)
        str_len++;

    int count = 0;

    for (int i = 0; i < str_len / 2; i++)
    {
        if (*(str + i) == *(str + str_len - i - 1))
        {
            count++;
            // printf("%c %c\n", *(str + i), *(str + str_len - i - 1));
        }
    }

    if (count == str_len / 2)
        return 1;

    return 0;
}

int main()
{
    scanf("%s", A);

    if (is_palindrome(A))
        printf("Yes");
    else
        printf("No");

    // Please write your code here.
    return 0;
}