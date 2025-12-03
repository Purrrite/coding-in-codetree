#include <stdio.h>
#include <string.h>

char text[1001];
char pattern[1001];

int subarr_index(int pattern_len, int text_len)
{
    for (int i = 0; i <= text_len - pattern_len; i++)
    {
        char temp[1001] = {'\0'};
        strncpy(temp, text + i, pattern_len);
        temp[pattern_len] = '\0';
        
        if (strcmp(temp, pattern) == 0)
            return i;
    }
    return -1;
}

int main()
{
    scanf("%s", text);
    scanf("%s", pattern);

    // Please write your code here.
    int pattern_len = strlen(pattern);
    int text_len = strlen(text);

    int output = subarr_index(pattern_len, text_len);
    printf("%d", output);

    return 0;
}