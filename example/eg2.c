#include <stdio.h>

int main() {
  int number, i = 0;

  printf("ป้อนตัวเลขสำหรับแสดงสูตรคูณ: ");
  scanf("%d", &number); // number = 5

  printf("สูตรคูณสำหรับ %d คือ:\n", number);

  // for (i = 1; i <= 10; i++) {
  //   printf("%d x %d = %d\n", number, i, number * i);
  // }

  while (i <= 10) {
    printf("%d x %d \t =\t %d\n", number, i, number * i);
    i++;
  }

  return 0;
}
