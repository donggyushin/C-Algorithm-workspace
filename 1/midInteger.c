#include <stdio.h>

// To understand, it is better drawing the situation.
int med3(int a, int b, int c)
{
    if (a > b)
    {
        if (b > c)
        {
            return b;
        }
        else if (c > a)
        {
            return a;
        }
        else
            return c;
    }
    else if (a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return c;
    }
    else
        return b;
}

int main(void)
{
    int a, b, c;
    int mid;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    mid = med3(a, b, c);
    printf("Mid value of a,b,c is %d\n", mid);
    return 0;
}
