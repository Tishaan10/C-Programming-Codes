#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    printf("Profit = %.2f", sellingPrice - costPrice);
    return 0;
}