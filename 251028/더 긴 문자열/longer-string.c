#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str1[20], str2[20];

    scanf("%s %s", &str1, &str2);

    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    if (str1_len > str2_len) {
        printf("%s %d", str1, str1_len);
    }
    else if (str1_len < str2_len){
        printf("%s %d", str2, str2_len);
    }
    else printf("same");
    return 0;
}