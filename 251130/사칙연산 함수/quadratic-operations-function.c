#include <stdio.h>

int add(int *a, int *c) {
    printf("%d + %d = %d",*a, *c, *a + *c);
}

int subtract(int *a, int *c) {
    printf("%d - %d = %d",*a, *c, *a - *c);
}

int multiply(int *a, int *c) {
    printf("%d * %d = %d",*a, *c, *a * *c);
}

int divide(int *a, int *c) {
    printf("%d / %d = %d",*a, *c, *a / *c);
}

int main()
{
    int a, c;
    char o;

    scanf("%d %c %d", &a, &o, &c);

    switch (o)
    {
    case '+':
    {
        add(&a, &c);
        break;
    }
    case '-':
    {
        subtract(&a, &c);
        break;
    }
    case '*':
    {
        multiply(&a, &c);
        break;
    }
    case '/':
    {
        divide(&a, &c);
        break;
    }
    default:
        printf("False");
        break;
    }

    return 0;
}