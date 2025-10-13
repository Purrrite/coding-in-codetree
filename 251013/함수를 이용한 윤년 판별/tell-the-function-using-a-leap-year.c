#include <stdio.h>
int is_leap_year(int year);
int special_condition(int year);

int main() {
    int y;
    scanf("%d", &y);
    
    // Please write your code here.
    char *output = is_leap_year(y) ? "true" : "false";
    printf("%s", output);
    return 0;
}

int is_leap_year(int year) {
    return (year % 4 == 0 && !special_condition(year));
}

int special_condition(int year) {
    return (year % 100 == 0 && year % 400 != 0);
}