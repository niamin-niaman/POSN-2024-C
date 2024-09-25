#include <stdio.h>

int main() {

  int n[] = {1, 2, 3, 4, 5};

  // เข้าถึง
  int a = n[0];
  printf("n[0] : %d\n", n[0]);
  printf("a : %d\n", a);

  // แก้ไข
  n[0] = 6;
  printf("n[0] : %d\n", n[0]);

  int n_size = sizeof(n) / sizeof(n[0]);
  // sizeof : find size in byte
  // 8 bits = 1 byte

  printf("show all\n");
  // แสดงทั้งหมด
  for (int i = 0; i < n_size; i++) {
    printf("n[%d]: %d\n", i, n[i]);
  }

  return 0;
}