#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("Total = %d", a + b + c + d + e);
    return 0;
}