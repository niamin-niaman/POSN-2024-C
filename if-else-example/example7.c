#include <stdio.h>

int main() {
    float temperature;

    printf("กรุณาระบุอุณหภูมิ: ");
    scanf("%f", &temperature);

    if (temperature > 30) {

        printf("อากาศร้อน\n");
    } else {
        printf("อากาศเย็น\n");
    }

    printf("ขอบคุณครับ\n");

    return 0;
}
