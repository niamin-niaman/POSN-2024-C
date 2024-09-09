
#include <stdio.h>

int main() {

  // // ประกาศต่อเนื่อง
  // int myInt_1; 
  // int myInt_2;
  // int myInt_3;
  // // so on ...

  // // กำหนดค่าให้ตัวแปรต่อเนื่อง
  // myInt_1 = 1;
  // myInt_2 = 2;
  // myInt_3 = 3;
  // // so on ...

  // printf("position 1 : %d\n",myInt_1);
  // printf("position 2 : %d\n",myInt_2);
  // printf("position 3 : %d\n",myInt_3);

  int myInt[3];

  myInt[0] = 1;
  myInt[1] = 2;
  myInt[2] = 3;

  printf("position 1 index 0 : %d\n",myInt[0]);
  printf("position 2 index 1 : %d\n",myInt[1]);
  printf("position 3 index 2 : %d\n",myInt[2]);
  
  // printf("position 3 index 2 : %d\n",myInt[-1]);

  // // แก้ไขค่าใหม่ได้
  printf("enter your new number : ");
  scanf("%d",&myInt[0]);
  printf("position 1 index 0 : %d\n",myInt[0]);
    
}
