#include <stdio.h>
#include <string.h>

char strings[10][20];
char check;
int is_exist = 0;

int main() {
    for (int i = 0; i < 10; i++)
        scanf("%s ", strings[i]);

    scanf("%c", &check);

    for (int i = 0; i < 10; i++) {
        char end_letter = strings[i][strlen(strings[i]) - 1];
        
        if (end_letter == check) {
            printf("%s\n", strings[i]);
            is_exist = 1;
        }
    }

    if (!is_exist) 
        printf("None");

    return 0;
}