#include <stdio.h>
#include <string.h>

int main() {
  
  // declare and initialize string
  char str[20] = "Geeks";

  // array of character อักขระต่อกัน %c, string ข้อความ %s

  // print string
  // printf("%s\n", str);

  // printf("%c\n",str[0]);

  // scanf("%s",str);

  // printf("%s\n",str);

  // int length = 0;
  // length = strlen(str);

  // displaying the length of string
  // printf("Length of string str is %d\n", length);

  // printf("\n");

  char arr[3][10] = {"Geek", "Geeks", "Geekfor"};
  // printf("String array Elements are:\n");

  for (int i = 0; i < 3; i++) {
    printf("%s\n", arr[i]);
  }
  return 0;

}