#include <stdio.h>

int main() {
    float principal, rate, time, si, amount;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    si = (principal * rate * time) / 100;
    amount = principal + si;

    printf("Simple Interest = %.2f\n", si);
    printf("Amount = %.2f", amount);

    return 0;
}