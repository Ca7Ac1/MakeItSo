#include <stdlib.h>

#define max(a, b) a > b ? a : b

int multiple35()
{
    int sum = 0;

    int i;
    for (i = 0; i < 1000; i++)
    {
        if (i % 5 == 0 || i % 3 == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int fibEven()
{
    int sum = 0;

    int a = 0;
    int b = 1;
    int c = 0;

    while(a + b < 4000000)
    {
        c = a + b;

        if (c % 2 == 0)
        {
            sum += c;
        }

        a = b;
        b = c;
    }

    return sum;
}

unsigned long long largestPrimeFactor()
{
    unsigned long long num = 600851475143;
    unsigned long long sol = 1;

    unsigned long long i; 
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            sol = i;
        }

        while (i <= num && num % i == 0)
        {
            num /= i;
        }
    }

    return max(sol, num);
}

int smallestMultiple()
{
    int total = 1;

    int i;
    int j;

    for (i = 1; i <= 20; i++)
    {
        int num = i;
        int additional = 1;
        for (j = i - 1; j > 1; j--)
        {
            while (num % j == 0 && total % j == 0)
            {
                total /= j;
                num /= j;
                additional *= j;
            }
        }

        total *= num * additional;
    }

    return total;
}

int sumSquareDiff()
{
    int sum = 0;
    int square = 0;

    int i;
    for (i = 1; i <= 100; i++)
    {
        sum += i * i;
        square += i;
    }

    square *= square;

    return square - sum;
}
