#include <stdio.h>
#include <stdbool.h>

int main() {

  printf("do this statement first\n");

  if (false) {
    printf("wont do this statement in if-else-if\n");
  } else if (false) {
    printf("wont do this statement in if-else-if\n");
  } else {
    printf("do this statement in if-else-if\n");
  }

  if (false) {
    printf("wont do this statement in if-else-if 2\n");
  } else if (true) {
    printf("do this statement in if-else-if 2\n");
  } else {
    printf("wont do this statement in if-else-if 2\n");
  }

  // bool a = true;
  // bool b = false;

  // if (b) {
  //   printf("wont do this statement in if-else-if\n");
  // } else if (b) {
  //   printf("wont do this statement in if-else-if\n");
  // } else {
  //   printf("do this statement in if-else-if\n");
  // }

  // if (b) {
  //   printf("wont do this statement in if-else-if 2\n");
  // } else if (a) {
  //   printf("do this statement in if-else-if 2\n");
  // } else {
  //   printf("wont do this statement in if-else-if 2\n");
  // }

  return 0;
}