#include <stdio.h>

int main() {
    // ประกาศและกำหนดค่าให้กับตัวแปร int
    int age = 25;

    // แสดงค่าของตัวแปร age บนหน้าจอ
    printf("อายุของคุณคือ: %d ปี\n", age);

    // การรับค่าจากผู้ใช้และแสดงผล
    int userAge;
    printf("โปรดป้อนอายุของคุณ: ");
    scanf("%d", &userAge);
    printf("คุณป้อนอายุเป็น: %d ปี\n", userAge);

    return 0;
}
