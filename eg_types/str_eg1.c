// advance: include library
#include <stdio.h>
#include <string.h>

int main() {
    // ประกาศตัวแปร string
    char name[100];

    // รับชื่อจากผู้ใช้
    printf("โปรดป้อนชื่อของคุณ: ");
    scanf("%s", name);

    // คำนวณความยาวของชื่อ
    int length = strlen(name);

    // แสดงความยาวของชื่อ
    printf("ความยาวของชื่อคุณคือ: %d ตัวอักษร\n", length);

    return 0;
}
