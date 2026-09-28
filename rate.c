#include <stdio.h>

int main() {
    float si, principal, time, rate;

    printf("Enter simple interest, principal and time: ");
    scanf("%f %f %f", &si, &principal, &time);

    rate = (si * 100) / (principal * time);

    printf("Rate = %.2f%%", rate);
    return 0;
}