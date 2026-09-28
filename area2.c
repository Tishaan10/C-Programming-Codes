#include <stdio.h>

int main() {
    float side;

    printf("Enter side: ");
    scanf("%f", &side);

    printf("Area = %.2f", side * side);
    return 0;
}