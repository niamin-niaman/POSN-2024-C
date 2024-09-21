#include <stdbool.h>
#include <stdio.h>

int main() {

  // printf("do this statement first \n");

  // if (true) {
  //   printf("do this statement\n");
  // }

  // if (true) {
  //   printf("do this statement in if-else\n");
  // } else {
  //   printf("wont do this statement in if-else\n");
  // }

  // if (false) {
  //   printf("wont do this statement in if-else\n");
  // } else {
  //   printf("do this statement in if-else\n");
  // }

  bool b = true;
  bool a = true;
  // falsy , truthy

  // if (b) {
  //   printf("do this statement\n");
  // }

  a = false;

  if (a) {
    printf("do this statement in if-else\n");
  } else {
    printf("wont do this statement in if-else\n");
  }

  // if (b) {
  //   printf("wont do this statement in if-else\n");
  // } else {
  //   printf("do this statement in if-else\n");
  // }

  return 0;
}