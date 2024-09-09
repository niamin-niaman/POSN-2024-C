#include <stdio.h>

int main() {
  char name[256];
  
  printf("Enter your name: ");
  scanf("%s", name);
  
  printf("Hello, %s! Nice to meet you.\n", name);
  return 0;
}