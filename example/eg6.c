#include <stdio.h>
#include <string.h>

int main() {
  int count = 0;
  char password[100];

  while (count < 3) {
    printf("กรุณาป้อนรหัสผ่าน: ");
    scanf("%s", password);

    if (strcmp(password, "secret") == 0) {
      printf("ยินดีต้อนรับเข้าสู่ระบบ!\n");
      break;
    } else {
      printf("รหัสผ่านไม่ถูกต้อง\n");
      count++;
    }
  }

  if (count == 3) {
    printf("คุณได้ลองป้อนรหัสผ่านไม่ถูกต้อง 3 ครั้ง ระบบปิดการใช้งาน\n");
  }

  return 0;
}
