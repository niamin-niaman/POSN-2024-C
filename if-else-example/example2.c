#include <stdio.h>
#include <stdbool.h>

int main() {
  
  float temperature;
  printf("กรุณาระบุอุณหภูมิ: ");
  scanf("%f", &temperature);

  bool isHot = temperature > 30;

  if (isHot) {
    printf("อากาศร้อน\n");
  }

  printf("ขอบคุณครับ\n");

  return 0;
}
