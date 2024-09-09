#include <stdio.h>

int main() {
    // ประกาศตัวแปรชนิด float
    float myFloat;

    // รับค่าทศนิยมจากผู้ใช้และกำหนดค่าให้กับตัวแปร myFloat
    printf("โปรดป้อนค่าทศนิยม: ");
    scanf("%f", &myFloat);

    // แสดงค่าของตัวแปร myFloat บนหน้าจอ
    printf("ค่าของตัวแปร myFloat คือ: %.1f\n", myFloat);

    return 0;
}
