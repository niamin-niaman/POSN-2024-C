#include <stdio.h>

// int main() {
int ifexampleextra(){

  int score;

  printf("กรุณาระบุคะแนน: ");
  scanf("%d", &score);

  // if (score >= 80 && score <= 100) {
  //   printf("เกรด A\n");
  // } else if (score >= 70 && score < 80) {
  //   printf("เกรด B\n");
  // } else if (score >= 60 && score < 70) {
  //   printf("เกรด C\n");
  // } else if (score >= 50 && score < 60) {
  //   printf("เกรด D\n");
  // } else if (score > 0 && score < 50)  {
  //   printf("เกรด F\n");
  // } else {
  //   printf("กรอกคะแนนผิดจ้า\n");
  // }

  // printf("คะแนน : %d\n",score);

  if (score < 50) {
      printf("เกรด F\n");
  } else if (score < 60) {
      printf("เกรด D\n");
  } else if (score < 70) {
      printf("เกรด C\n");
  } else if (score < 80) {
      printf("เกรด B\n");
  } else if (score <= 100) {
      printf("เกรด A\n");
  }

  return 0;
}
