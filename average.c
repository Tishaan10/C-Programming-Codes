#include <stdio.h>

int main() {
    float a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    printf("Average = %.2f", (a + b + c + d) / 4);
    return 0;
}