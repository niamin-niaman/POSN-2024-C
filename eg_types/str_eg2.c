#include <stdio.h>
#include <string.h>

int main() {
    // ประกาศตัวแปร string
    char firstName[50];
    char lastName[50];

    // รับชื่อและนามสกุลจากผู้ใช้
    printf("โปรดป้อนชื่อของคุณ: ");
    scanf("%s", firstName);

    printf("โปรดป้อนนามสกุลของคุณ: ");
    scanf("%s", lastName);

    // แสดงข้อความทักทาย
    printf("สวัสดี, %s %s!\n", firstName, lastName);

    return 0;
}
