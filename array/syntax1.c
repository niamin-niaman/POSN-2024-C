#include <stdio.h>

int main() {

  int n[] = {1, 2, 3, 4, 5};

  // access
  int a = n[0];
  printf("n[0] : %d\n", n[0]);
  printf("a : %d\n", a);

  // edit
  n[0] = 6;
  printf("n[0] : %d\n", n[0]);

  // sizeof : find size in byte
  // 8 bits = 1 byte
  int n_size = sizeof(n) / sizeof(n[0]);
  printf("n_size: %d\n", n_size);

  // display all
  printf("show all\n");
  for (int i = 0; i < n_size; i++) {
    printf("n[%d]: %d\n", i, n[i]);
  }

  return 0;
}