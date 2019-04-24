#include <stdio.h>

int main(void)
{

    int n = 0;

    while (n <= 0)
    {
        printf("Input integer greater than 0\n");
        scanf("%d", &n);
    }
    printf("User input is %d \n", n);

    return 0;
}