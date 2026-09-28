#include <stdio.h>

int main() {
    float minutes;

    printf("Enter minutes: ");
    scanf("%f", &minutes);

    printf("Seconds = %.2f", minutes * 60);
    return 0;
}