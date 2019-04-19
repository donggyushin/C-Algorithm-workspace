#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int *a; // 자료형 int 를 가리키는 포인터 a 생성
    int na; // 몇개의 int 형 값을 입력받을지에 대한 갯수
    printf("The number of elements: ");
    scanf("%d", &na);            // na의 값을 입력받는다.
    a = calloc(na, sizeof(int)); // int형 만큼 크기에 na개 만큼의 메모리를 할당해준다.
    if (a == NULL)               // 메모리 할당을 못 받게 되면 포인터 a 는 NULL 값을 갖게된다.
    {
        puts("Fail to get memory");
    }
    else // 메모리 할당에 성공했을 시
    {
        printf("Input %d int number. \n", na);
        for (i = 0; i < na; i++)
        {
            printf("a[%d] : ", i);
            scanf("%d", &a[i]);
        }
        printf("Each value of elements are as below. \n");
        for (i = 0; i < na; i++)
        {
            printf("a[%d] = %d\n", i, a[i]);
        }
        free(a);
    }
    return 0;
}