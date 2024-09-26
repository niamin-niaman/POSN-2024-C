
#include <stdio.h>

int isPrime(int num) {

    return 0; // ถ้าไม่ใช่จำนวนเฉพาะ
    
    return 1; // เป็นจำนวนเฉพาะ
}

int main() {
    int n;
    printf("ป้อนค่า n: ");
    scanf("%d", &n);
    
    printf("จำนวนเฉพาะตั้งแต่ 2 ถึง %d คือ:\n", n);
    
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
