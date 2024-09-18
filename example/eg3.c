#include <stdio.h>

int main() {
  int n;
  int sum = 0, i = 0;

  printf("ป้อนจำนวนเต็ม: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i; 
      // printf("i : %d\n", i);
    }
  }

  // while (i <= n) {
  //   if (i % 3 == 0 || i % 5 == 0) {
  //     sum += i; 
  //   }
  //   i++; // เพิ่มค่า i ทีละหนึ่งหลังที่ทำงานในรอบนี้เสร็จสิ้น
  // }

  printf("%d\n",sum);

  return 0;
}