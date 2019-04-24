#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int *a;
    int na;
    printf("The number of elements: ");
    scanf("%d", &na);

    a = calloc(na, sizeof(int));

    if (a == NULL)
    {
        puts("Fail to assign memory");
    }
    else
    {
        printf("Input integer\n");
        for (i = 0; i < na; i++)
        {
            printf("a[%d]: ", i);
            scanf("%d", &a[i]);
        }
        printf("Results\n");
        for (i = 0; i < na; i++)
        {
            printf("a[%d]:%3d\n", i, a[i]);
        }
        free(a);
    }
    return 0;
}