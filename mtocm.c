#include <stdio.h>

int main() {
    float meter;

    printf("Enter distance in meters: ");
    scanf("%f", &meter);

    printf("Centimeters = %.2f", meter * 100);
    return 0;
}