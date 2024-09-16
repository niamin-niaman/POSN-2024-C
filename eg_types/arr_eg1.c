#include <stdio.h>
int main() {
    // ประกาศและกำหนดค่าให้กับอาร์เรย์ของตัวเลข
    int numbers[] = {10, 20, 30, 40, 50};
    // หาผลรวมของตัวเลขในอาร์เรย์
    int sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    // แสดงผลรวม
    printf("ผลรวมของตัวเลขในอาร์เรย์คือ: %d\n", sum);

    return 0;
}
