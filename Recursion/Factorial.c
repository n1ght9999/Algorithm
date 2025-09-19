#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num = 5;
    printf("%d! = %d\n", num, factorial(num));
    return 0;
}