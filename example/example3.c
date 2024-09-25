#include <stdio.h>

int main() {
    int data[] = {2, 4, 2, 8, 3, 2, 5, 1, 2};
    int n = sizeof(data) / sizeof(data[0]); // หาจำนวนข้อมูลในอาร์เรย์

    // สร้างอาร์เรย์สำหรับเก็บจำนวนครั้งที่แต่ละข้อมูลปรากฎ
    int frequency[10] = {0}; // เริ่มต้นทั้งหมดเป็น 0

    // นับความถี่ของแต่ละข้อมูล
    for (int i = 0; i < n; i++) {
        frequency[data[i]]++;
    }

    // พิมพ์ความถี่ของแต่ละข้อมูล
    printf("ความถี่ของแต่ละข้อมูล:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("%d ปรากฎ %d ครั้ง\n", i, frequency[i]);
        }
    }

    return 0;
}