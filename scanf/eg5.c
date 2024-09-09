#include <stdio.h>

int main() {
    float radius;
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}