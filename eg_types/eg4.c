#include <stdio.h>

int main() {
    // ประกาศและกำหนดค่าให้กับตัวแปร float
    float weight = 65.5;
    // แสดงค่าของตัวแปร weight บนหน้าจอ
    printf("น้ำหนักของคุณคือ: %.2f กิโลกรัม\n", weight);

    // การรับค่าจากผู้ใช้และแสดงผล
    float userWeight;
    printf("โปรดป้อนน้ำหนักของคุณ (กิโลกรัม): ");
    scanf("%f", &userWeight);
    printf("คุณป้อนน้ำหนักเป็น: %.2f กิโลกรัม\n", userWeight);

    return 0;
}
