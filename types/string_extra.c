#include <stdio.h>
#include <string.h>

int main() {
    // ประกาศตัวแปรชนิดข้อความ (string)
    char myString[50]; // สร้างอาร์เรย์ขนาด 50 สำหรับเก็บข้อความ

    // รับข้อความจากผู้ใช้และเก็บในตัวแปร myString
    printf("โปรดป้อนข้อความ: ");
    scanf("%s", myString);

    // แสดงข้อความที่ผู้ใช้ป้อน
    printf("คุณป้อนข้อความ: %s\n", myString);
  
    printf("ตัวอักษรตำแหน่งที่ 1 ในข้อความ: %c\n", myString[0]);

    return 0;
}
