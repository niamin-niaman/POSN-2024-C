#include <stdio.h>

int main() {

  int len;
  printf("entef your len string:");
  scanf("%d",&len);


  char name[len];
  
  printf("Enter your name: ");
  scanf("%s", name);
  
  printf("Hello, %s! Nice to meet you.\n", name);
  return 0;
}