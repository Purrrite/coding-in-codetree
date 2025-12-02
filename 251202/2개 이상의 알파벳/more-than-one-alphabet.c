#include <stdio.h>

char A[101];

int is_it(char a[]) {
    char check[128] = {0};

    for (int i = 0; a[i] != 0; i++) {
        check[(int)A[i]]++;
    }

    int count = 0;
    for (int i = 0; i < 128; i++)
        count = check[i] >= 1 ? count + 1 : count;
        
    if (count >= 2)
        return 1;

    return 0;
}

int main(void) {
    scanf("%s", A);
    
    // Please write your code here.
    if (is_it(A))
        printf("Yes");
    else
        printf("No");

    return 0;
}