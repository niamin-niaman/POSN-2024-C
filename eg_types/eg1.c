#include <stdio.h>

int main() {
    // ประกาศและกำหนดค่าให้กับตัวแปร int
    int myInt = 42;

    // แสดงค่าของตัวแปร myInt บนหน้าจอ
   printf("ค่าของตัวแปร myInt: %d\n", myInt);

    // การดำเนินการทางคณิตศาสตร์กับตัวแปร int
    int x = 6;
    int y = 10;
    int sum = x + y;
    int difference = x - y;
    int product = x * y;
    int quotient = x / y;
    int modulo = x % y;

    printf("ผลบวก: %d\n", sum);
    printf("ผลต่าง: %d\n", difference);
    printf("ผลคูณ: %d\n", product);
    printf("ผลหาร: %d\n", quotient);
    printf("ผลหารเอาเศษ: %d\n", modulo);

    return 0;
}