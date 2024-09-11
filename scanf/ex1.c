// รับชื่อผู้ใช้ แล้วแสดงผลลัพธ์ว่า "สวัสดีคุณ [ชื่อผู้ใช้]"

#include <stdio.h> 
int main() {
  char ra[20] ;
  printf("ป้อนชื่อของคุณ :");
  scanf("%s",ra);
  printf("สวัสดีคุณ %s\n",ra);
  return 0;
}