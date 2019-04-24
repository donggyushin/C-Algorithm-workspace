#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *a, int n)
{
    int i;
    int t;
    for (i = 0; i < n / 2; i++)
    {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
}

int main(void)
{
    int *array;
    int number;
    int i;
    printf("Input the array number: ");
    scanf("%d", &number);
    printf("Input \n");
    for (i = 0; i < number; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("Results \n");
    for (i = 0; i < number; i++)
    {
        printf("array[%d]: %3d\n", i, array[i]);
    }
    printf("Reversing...\n");
    reverse_array(array, number);
    printf("Reversing completed! \n");
    printf("Reversed results \n");
    for (i = 0; i < number; i++)
    {
        printf("array[%d]: %3d\n", i, array[i]);
    }
    free(array);
    return 0;
}