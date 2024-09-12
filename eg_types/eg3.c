// optional eg
#include <stdio.h>

int main() {

    // การดำเนินการทางคณิตศาสตร์กับตัวแปร float
    float num1 = 10.5;
    float num2 = 3.0;
    float result;

    result = num1 + num2;
    printf("ผลบวกของ %.2f และ %.2f คือ: %.2f\n", num1, num2, result);

    result = num1 - num2;
    printf("ผลต่างของ %.2f และ %.2f คือ: %.2f\n", num1, num2, result);

    result = num1 * num2;
    printf("ผลคูณของ %.2f และ %.2f คือ: %.2f\n", num1, num2, result);

    result = num1 / num2;
    printf("ผลหารของ %.2f และ %.2f คือ: %.2f\n", num1, num2, result);


    return 0;
}
