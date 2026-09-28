#include <stdio.h>

int main() {
    float radius;
    float pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Circumference = %.2f", 2 * pi * radius);
    return 0;
}