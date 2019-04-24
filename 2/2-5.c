#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n)
{
    int i;
    int max = 0;
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
    int *height; // Pointer of first element of array
    int number;  // The number of height element
    int max;
    printf("The number of people: ");
    scanf("%d", &number);
    height = calloc(number, sizeof(int)); // Create array which elements number is 'number' user input.
    for (i = 0; i < number; i++)
    {
        printf("height[%d]: ", i);
        scanf("%d", &height[i]);
    }
    max = maxof(height, number);
    printf("The max value is %d \n", max);
    free(height);
    return 0;
}