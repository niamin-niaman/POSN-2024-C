#include <stdio.h>

int main() {
    // ประกาศตัวแปร integer
    int weight, height;

    // รับค่าน้ำหนักและส่วนสูงจากผู้ใช้
    printf("โปรดป้อนน้ำหนัก (กิโลกรัม): ");
    scanf("%d", &weight);

    printf("โปรดป้อนส่วนสูง (เมตร): ");
    scanf("%d", &height);

    // คำนวณ BMI
    int bmi = (weight * 10000) / (height * height);

    // แสดงค่า BMI
    printf("ดัชนีมวลกาย (BMI) ของคุณคือ: %d\n", bmi);

    return 0;
}
