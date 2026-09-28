#include <stdio.h>

int main() {
    float km;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    printf("Meters = %.2f", km * 1000);
    return 0;
}