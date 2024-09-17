#include <stdio.h>

int main() {

  int age;
  float income;

  printf("กรุณาระบุอายุ: ");
  scanf("%d", &age);

  printf("กรุณาระบุรายได้: ");
  scanf("%f", &income);

  if (age >= 18 && income >= 10000) {
    printf("คุณมีสิทธิ์สมัครบัตรเครดิต\n");
  }

  printf("ขอบคุณครับ\n");

  return 0;
}
