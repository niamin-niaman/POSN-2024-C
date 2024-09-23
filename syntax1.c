#include <stdio.h>

int main() {

  // int i = 0; 
  // printf("i : %d\n",i);

  // // i++;
  // printf("i : %d\n",++i);

  // i = i + 1;
  // prinf("i: %d\n",i);
  
  // i++;
  // printf("i : %d\n",i);

  // i++;
  // printf("i : %d\n",i);

  // i++;
  // printf("i : %d\n",i);

  // int i, n = 0 ;
  // for (i = 0; i <= 5; ++i) {
  //   printf("i : %d, n : %d\n",i,++n);
  // }
  // // 1. check
  // 2. do
  // 3. ++

  // int i = 5; // initial
  // while (i > 1) { // condition
  //   printf("i : %d\n", i);
  //   i--; // increment
  // }

  // int i = 5;
  // do {
  //   i++;
  //   printf("i : %d\n", i);
  // } while (i < 5);

  int flag = 0 ;

  do {
    printf("enter flag : ");
    scanf("%d",&flag);
  } while(flag != 0);

  // while(flag != 0){
  //   printf("enter flag : ");
  //   scanf("%d",&flag);
  // }

  return 0;
}