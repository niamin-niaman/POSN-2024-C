#include <stdio.h>

int main() {

  int age;

  printf("ป้อนอายุ: ");
  scanf("%d", &age);

  if (age < 18) {
    printf("คุณเป็นเด็ก\n");
  } else if (age < 25) {
    printf("คุณเป็นวัยรุ่น\n");
  } else if (age < 80) {
    printf("คุณเป็นผู้ใหญ่\n");
  } else {
    printf("คุณเป็นอมตะ\n");
  }

  printf("ขอบคุณครับ\n");

  return 0;
}
