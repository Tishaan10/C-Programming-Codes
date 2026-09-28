#include <stdio.h>

int main() {
    float marks, percentage;

    printf("Enter total marks obtained out of 500: ");
    scanf("%f", &marks);

    percentage = (marks / 500) * 100;

    printf("Percentage = %.2f%%", percentage);
    return 0;
}