#include <stdio.h>

int main() {
  int n, sum = 0;
  int i = 1;

  do { // วนลูปไปเรื่อยๆ
    printf("ป้อนจำนวนเต็ม (ป้อน 9 เพื่อสิ้นสุด): ");
    scanf("%d", &n);

    // if (n == 0) {
    //   break; // หากผู้ใช้ป้อน 0 ให้ออกจากลูป
    // }

    sum += n; // เพิ่มค่า n เข้าไปในผลรวม
  } while (n != 9);

  printf("ผลรวมของตัวเลขที่ป้อนคือ: %d\n", sum);

  return 0;
}
