#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int maxOf(const int a[], int n)
{
    int max = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int main(void)
{
    int i;
    int *height;
    int number;
    int max;
    srand(time(NULL)); // Initialization, should only be called once.
    printf("Input the number of people: ");
    scanf("%d", &number);
    height = calloc(number, sizeof(int));
    for (i = 0; i < number; i++)
    {
        height[i] = 100 + rand() % 90;
    }
    max = maxOf(height, number);
    free(height);
    printf("The max value is %d \n", max);
    return 0;
}