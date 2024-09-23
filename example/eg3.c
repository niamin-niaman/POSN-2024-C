#include <stdio.h>

int main() {
  int n;
  int sum = 0, i = 0, a = 0;

  printf("ป้อนจำนวนเต็ม: "); // 30
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i; 
      a++;
      printf("i : %d\n", i);
      printf("sum : %d\n", sum);
      printf("========\n");
    }
  }

  // while (i <= n) {
  //   if (i % 3 == 0 || i % 5 == 0) {
  //     sum += i; 
  //   }
  //   i++; // เพิ่มค่า i ทีละหนึ่งหลังที่ทำงานในรอบนี้เสร็จสิ้น
  // }

  printf("sum: %d\n",sum);
  printf("a: %d\n",a);
  // 15 -> 16 (1) : 2
  // 11 -> 14 (2) : 2
  // 20 -> 17 (3) : 1

  return 0;
}