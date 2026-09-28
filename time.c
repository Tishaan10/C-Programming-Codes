#include <stdio.h>

int main() {
    float si, principal, rate, time;

    printf("Enter simple interest, principal and rate: ");
    scanf("%f %f %f", &si, &principal, &rate);

    time = (si * 100) / (principal * rate);

    printf("Time = %.2f years", time);
    return 0;
}