#include <stdio.h>

int main() {

  int age;
  float income;

  printf("กรุณาระบุอายุ: ");
  scanf("%d", &age);

  printf("กรุณาระบุรายได้: ");
  scanf("%f", &income);

  // อายุ 18 , 10000 ขึ้น
  // 50,000 อายุ เท่าไหร่ก็ได้

  if ((age >= 18 && income >= 10000) || income >= 50000) {
    printf("คุณมีสิทธิ์สมัครบัตรเครดิต\n");
  } else {
    printf("คุณไม่มีสิทธิ์สมัครบัตรเครดิต\n");
  }

  printf("ขอบคุณครับ\n");

  return 0;
}
