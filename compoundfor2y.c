#include <stdio.h>

int main() {
    float principal, rate, amount, ci;

    printf("Enter principal and rate: ");
    scanf("%f %f", &principal, &rate);

    amount = principal * (1 + rate / 100) * (1 + rate / 100);
    ci = amount - principal;

    printf("Compound Interest = %.2f", ci);

    return 0;
}