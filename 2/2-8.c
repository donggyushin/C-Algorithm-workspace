#include <stdio.h>

// 정수 값 x 를 n진수로 변환하고, 자릿수 반환
int card_convr(unsigned x, int n, char *d)
{
    char *dchar = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0; // 변환 후 자릿수
    if (x == 0)
    {
        d[digits++] = dchar[0];
    }
    else
    {
        while (x)
        {
            d[digits++] = dchar[x % n];
            x = x / n;
        }
    }
    return digits;
}

int main(void)
{
    int i;
    unsigned no;   // 변환하는 정수
    int cd;        // 기수
    int dno;       // 변환 후 자릿수
    char cno[512]; // 변환한 값의 각 자리의 숫자를 저장하는 문자 배열
    printf("변환할 음이 아닌 정수: ");
    scanf("%u", &no);
    printf("어떤 진수로 변환할까요? (2-36)");
    scanf("%d", &cd);
    dno = card_convr(no, cd, cno);
    printf("result: ");
    for (i = dno - 1; i >= 0; i--)
    {
        printf("%c", cno[i]);
    }

    return 0;
}