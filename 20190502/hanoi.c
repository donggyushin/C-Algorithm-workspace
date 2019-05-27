#include <stdio.h>

// 원반[1]~ 원반[2]를 x 기둥에서 y기둥으로 옮김.
void move(int no, int x, int y)
{
    if (no > 1)
    {
        move(no - 1, x, 6 - x - y);
    }
    printf("원반[%d]를(을) %d 기둥에서 %d 기둥으로 옮김\n", no, x, y);
}