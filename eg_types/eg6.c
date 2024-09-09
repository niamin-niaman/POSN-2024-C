#include <stdio.h>

int main() {
    // ประกาศและกำหนดค่าให้กับตัวแปร char
    char firstInitial = 'J';
    char lastInitial = 'D';

    // แสดงค่าของตัวแปร char บนหน้าจอ
    printf("ชื่อของคุณ: %c. %c.\n", firstInitial, lastInitial);

    // การรับค่าจากผู้ใช้และแสดงผล
    char middleInitial;
    printf("โปรดป้อนตัวอักษรตัวกลางของคุณ: ");
    scanf(" %c", &middleInitial);
    printf("ตัวอักษรตัวกลางของคุณคือ: %c\n", middleInitial);

    return 0;
}
