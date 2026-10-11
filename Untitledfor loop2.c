#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}





#include <stdio.h>

int main()
{
    int i, fact = 1;

    for(i = 1; i <= 5; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}
