#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char a[100];
    char b[100];

    int a_len;
    int b_len;

    scanf("%s %s", &a, &b);

    for (int i = 0; i < 100; i++) {
        if (a[i] == '\0') {
            a_len = i;
            break;
        }
    }

    b_len = strlen(b);

    printf("%d", a_len + b_len);


    return 0;
}