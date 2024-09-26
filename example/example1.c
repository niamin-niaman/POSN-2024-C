#include <stdio.h>

int main() {
  int data[100]; // ประกาศอาร์เรย์สำหรับเก็บข้อมูล
  int n; // จำนวนข้อมูลที่ผู้ใช้ป้อนเข้ามา
  int sum = 0;    // ผลรวมของข้อมูล
  double average; // ค่าเฉลี่ยของข้อมูล

  printf("ป้อนจำนวนข้อมูล: ");
  scanf("%d", &n);

  printf("ป้อนข้อมูล %d ค่า:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &data[i]); // อ่านข้อมูลและเก็บในอาร์เรย์
    sum += data[i]; // บวกข้อมูลเข้ากับผลรวม
  }

  // คำนวณค่าเฉลี่ย
  // cast value type
  average = (double) sum / n;
  // double = (double) int / int

  // พิมพ์ผลลัพธ์
  printf("ผลรวมของข้อมูล: %d\n", sum);
  printf("ค่าเฉลี่ย: %.2lf\n", average);

  return 0;
}
