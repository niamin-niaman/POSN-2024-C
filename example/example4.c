#include <stdio.h>

int main() {
    // สร้างอาร์เรย์ 2 มิติสำหรับคะแนนทีมในกีฬา
    int scores[3][2]; // 3 ทีม x 2 รอบ

    // นำคะแนนจากผู้ใช้
    for (int i = 0; i < 3; i++) {
        printf("ป้อนคะแนนสำหรับทีมที่ %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("รอบที่ %d: ", j + 1);
            scanf("%d", &scores[i][j]);
        }
    }

    // แสดงคะแนนในตาราง
    printf("ตารางคะแนน:\n");
    for (int i = 0; i < 3; i++) {
        printf("ทีมที่ %d: ", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
