#include <stdio.h>

int getSumFromOneToN(int n)
{
    int i = 0;
    int sum = 0;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    return sum;
}

int getSumFromOneToNByFor(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main(void)
{
    int n;
    int sum;
    printf("Input n:");
    scanf("%d", &n);
    sum = getSumFromOneToN(n);
    printf("Sum from 1 to n is %d\n", sum);
    sum = getSumFromOneToNByFor(n);
    printf("Sum from 1 to n is %d\n", sum);
    return 0;
}