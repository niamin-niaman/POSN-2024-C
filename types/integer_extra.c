#include <stdio.h>

int main(void) {
  // ประกาศตัวแปรชนิด integer
  int myInteger;

  // รับค่าจากผู้ใช้และกำหนดค่าให้กับตัวแปร myInteger
  printf("โปรดป้อนค่าจำนวนเต็ม: ");
  scanf("%d", &myInteger);

  // แสดงค่าของตัวแปร myInteger บนหน้าจอ
  printf("ค่าของตัวแปร myInteger คือ: %d\n", myInteger);

  return 0;
}