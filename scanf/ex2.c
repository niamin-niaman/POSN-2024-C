// รับค่าจำนวนเต็ม x และ y จากผู้ใช้ แล้วแสดงผลรวม

#include <stdio.h>

int main() {
    int x, y;
    printf("ป้อนจำนวนเต็ม x: ");
    scanf("%d", &x);
    printf("ป้อนจำนวนเต็ม y: ");
    scanf("%d", &y);

    printf("ผลรวมของ %d และ %d คือ %d\n", x, y, x + y);

    return 0;
}