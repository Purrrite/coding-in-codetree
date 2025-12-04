#include <stdio.h>
#include <stdlib.h>

struct Code
{
    char *code;
    char point;
    int time;
};

int main()
{
    char secret_code[11];
    char meeting_point;
    int time;

    scanf("%s %c %d", secret_code, &meeting_point, &time);

    struct Code code1 = {secret_code, meeting_point, time};

    printf("secret code : %s\n", code1.code);
    printf("meeting point : %c\n", code1.point);
    printf("time : %d\n", code1.time);

    return 0;
}