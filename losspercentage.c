#include <stdio.h>

int main() {
    float cp, sp, loss;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    loss = cp - sp;

    printf("Loss Percentage = %.2f%%", (loss / cp) * 100);
    return 0;
}