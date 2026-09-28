#include <stdio.h>

int main() {
    float si, rate, time, principal;

    printf("Enter simple interest, rate and time: ");
    scanf("%f %f %f", &si, &rate, &time);

    principal = (si * 100) / (rate * time);

    printf("Principal = %.2f", principal);
    return 0;
}