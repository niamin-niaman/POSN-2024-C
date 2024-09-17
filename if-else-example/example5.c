#include <stdio.h>

int main() {
  float number;

  printf("ป้อนตัวเลข: ");
  scanf("%f", &number);

  if (number > 0) {
    printf("ตัวเลขเป็นบวก\n");
  } else if (number < 0) {
    printf("ตัวเลขเป็นลบ\n");
  } else {
    printf("ตัวเลขเท่ากับศูนย์\n");
  }

  return 0;
}
