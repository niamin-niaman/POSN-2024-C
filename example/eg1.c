#include <stdio.h>

int main() {
  int n, sum = 0, i = 0;

  printf("ป้อนจำนวนเต็ม: ");
  scanf("%d", &n);

  // for (i = 1; i <= n; i++) {
  //   sum += i; // เพิ่มค่า i เข้าไปในผลรวม
  //   printf("sum : %d\n",sum);
  //   printf("i : %d\n",i);
  //   printf("=====\n");
  // }

  while (i <= n) {
    sum += i; // เพิ่มค่า i เข้าไปในผลรวม
    i++;
  }

  printf("ผลรวมของจำนวนเต็มจาก 1 ถึง %d คือ %d\n", n, sum);

  return 0;
}
