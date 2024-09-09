#include <stdio.h>

int main() {
    // ประกาศและกำหนดค่าให้กับตัวแปร array
    int numbers[] = {1, 2, 3, 4, 5};

    // แสดงค่าของตัวแปร array ทั้งหมด
    printf("ค่าของตัวแปร array คือ: ");
    printf("%d, %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

    // การรับค่าจากผู้ใช้และแสดงผล
    int userNumbers[3];
    printf("โปรดป้อน 3 จำนวนเต็ม: ");
    scanf("%d %d %d", &userNumbers[0], &userNumbers[1], &userNumbers[2]);

    // แสดงค่าที่ผู้ใช้ป้อน
    printf("ค่าที่คุณป้อนคือ: %d, %d, %d\n", userNumbers[0], userNumbers[1], userNumbers[2]);

    return 0;
}
