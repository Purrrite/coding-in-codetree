#include <stdio.h>
#include <string.h>

char string[10][100];
int a_count = 0;
int every_string_length = 0;

int main() {
    // Please write your code here.
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
        scanf("%s", string[i]);
    
    for (int i = 0; i < N; i++) {
        int string_len = strlen(string[i]);
        every_string_length += string_len;

        if (string[i][0] == 'a')
            a_count++;
    }

    printf("%d %d", every_string_length, a_count);
    return 0;
}