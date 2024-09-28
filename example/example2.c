#include <stdio.h>

// bubble sort
// see visual https://visualgo.net/en/sorting
int main() {

  int data[] = {5, 2, 9, 1, 5, 6}; // 1 2 5 5 6 9
  int n = sizeof(data) / sizeof(data[0]); // หาจำนวนข้อมูลในอาร์เรย์

  // พิมพ์ข้อมูลก่อนเรียงลำดับ
  printf("ข้อมูลก่อนเรียงลำดับจากน้อยไปหามาก:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      printf("i: %d, j: %d\n",i,j);
      if (data[j] > data[j + 1]) {
        // สลับค่าถ้าต้องการเรียงลำดับจากน้อยไปหามาก
        int temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }

  // เรียงลำดับข้อมูล
  // int swapped = 0;
  // do {
  //   swapped = 0;
  //   for (int i = 0; i < n - 1; i++) {
  //     if (data[i] > data[i + 1]) {
  //       // สลับค่าถ้าต้องการเรียงลำดับจากน้อยไปหามาก
  //       int temp = data[i];
  //       data[i] = data[i + 1];
  //       data[i + 1] = temp;
  //       swapped = 1;
  //     }
  //   }
  // } while (swapped);

  // พิมพ์ข้อมูลหลังจากเรียงลำดับ
  printf("ข้อมูลหลังจากเรียงลำดับจากน้อยไปหามาก:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", data[i]);
  }

  printf("\n");

  return 0;
}