#include <stdio.h>
#include <string.h>

int main() {
    // ประกาศตัวแปรชนิดข้อความ (string)
    char myString[50]; // สร้างอาร์เรย์ขนาด 50 สำหรับเก็บข้อความ

    // myString = "Hello From myString";
    // กำหนดค่าให้กับตัวแปร myInteger
    strcpy(myString, "Hello From myString");

    // แสดงข้อความที่ผู้ใช้ป้อน
    printf("คุณป้อนข้อความ: %s\n", myString);

    return 0;
}
