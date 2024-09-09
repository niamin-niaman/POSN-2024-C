#include <stdio.h>

int main() {
    // ประกาศตัวแปรชนิด char
    char myChar;

    // รับค่าจากผู้ใช้และกำหนดค่าให้กับตัวแปร myChar
    printf("โปรดป้อนตัวอักษร: ");
    scanf(" %c", &myChar);

    // แสดงค่าของตัวแปร myChar บนหน้าจอ
    printf("ค่าของตัวแปร myChar: %c\n", myChar);

    return 0;
}
