#include <stdio.h>

int is_prime(int *num)
{
    int n = *num;

    if (n <= 1) return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    
    return 1;
    
}

int is_every_number_even(int n)
{
    int sum_of_digit = 0;

    while (n != 0)
    {
        sum_of_digit += n % 10;
        n /= 10;
    }

    int is_true = sum_of_digit % 2 == 0 ? 1 : 0;

    return is_true;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int count = 0;

    for (int i = a; i <= b; i++) 
        if (is_prime(&i) && is_every_number_even(i))
            count++;

    printf("%d", count);
    

    return 0;
}