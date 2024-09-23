#include <stdio.h>

int main() {
  int n[] = {5, 4, 3, 2, 1, 0, 3};
  int found = 0;

  printf("sizeof(n): %ld\n",sizeof(n) );
  printf("sizeof(n[3]): %ld\n",sizeof(n[3]));
  printf("sizeof(n) / sizeof(n[3]): %ld\n",sizeof(n) / sizeof(n[3]) );
  // $ld stand of long unsigned int ( sizeof(n) return long unsinged int )

  for (int i = 0; i < ( sizeof(n) / sizeof(n[3]) ); i++) {
    // printf("i : %d\n", i);
    printf("n[%d] : %d\n", i, n[i]);
    if (n[i] == 3) {
      found++;
      // break;
    }
  }

  if (found > 0) {
    printf("พบตัวเลข 3 ในอาร์เรย์! %d ตัว\n",found);
  } else {
    printf("ไม่พบตัวเลข 3 ในอาร์เรย์\n");
  }

  return 0;
}