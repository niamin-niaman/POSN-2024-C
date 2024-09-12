// optional eg
#include <stdio.h>

int main() {
    // ประกาศและกำหนดค่าให้กับตัวแปร char
    char grade = 'A';
    // แสดงค่าของตัวแปร grade บนหน้าจอ
    printf("เกรดของคุณคือ: %c\n", grade);

    // การรับค่าจากผู้ใช้และแสดงผล
    char userGrade;
    printf("โปรดป้อนเกรดของคุณ: ");
    scanf(" %c", &userGrade);
    printf("คุณป้อนเกรดเป็น: %c\n", userGrade);

    return 0;
}

