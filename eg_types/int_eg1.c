#include <stdio.h>

int main() {
    // ประกาศตัวแปร integer
    int number;

    // รับค่าจากผู้ใช้
    printf("โปรดป้อนจำนวนเต็ม: ");
    scanf("%d", &number);

    // ตรวจสอบว่าเป็นเลขคู่หรือเลขคี่ และแสดงผลลัพธ์
    int isEven = number % 2 == 0;

    printf("คุณป้อนเลข %d ที่เป็นเลข", number);
    printf(isEven ? "คู่\n" : "คี่\n");

    return 0;
}