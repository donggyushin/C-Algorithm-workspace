#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;                     // Create pointer x
    x = calloc(1, sizeof(int)); // Create memory as 1 integer size for pointer x
    if (x == NULL)              // If x equles with NULL
    {
        puts("Fail to assign memory. ");
    }
    else
    {
        *x = 57; // If successed for assigning memory, then put 57 to pointer x's value
        printf("*x = %d\n", *x);
        free(x); // If you finished using pointer x, then you should remove memory for pointer x using free method
    }
    return 0;
}