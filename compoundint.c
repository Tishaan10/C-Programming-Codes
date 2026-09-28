#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, ci;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    amount = principal * pow(1 + rate / 100, time);
    ci = amount - principal;

    printf("Compound Interest = %.2f", ci);

    return 0;
}