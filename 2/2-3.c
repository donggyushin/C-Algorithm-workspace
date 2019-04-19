#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    int i;                      // int형을 가리키는 포인터를 생성
    x = calloc(1, sizeof(int)); // int만큼의 사이즈를 1개만큼 담을 수 있는 메모리를 포인터 x에 할당
    if (x == NULL)
    {                                 // 포인터 x 가 NULL 값을 가지면 메모리 동적 할당에 실패한 것임
        puts("failed to get memory"); // 실패했다는 오류 메시지를 띄워줌
    }
    else
    {                            // 성공했을때
        *x = 57;                 // 포인터 x이 가리키는 메모리값에 정수 57을 할당
        printf("*x = %d\n", *x); // 출력해주고
        free(x);                 // x에 할당되어졌던 메모리를 해제해줌.
    }
    return 0;
}