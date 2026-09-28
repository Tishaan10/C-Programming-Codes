#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    amount = principal * pow(1 + rate / 100, time);

    printf("Amount = %.2f", amount);

    return 0;
}