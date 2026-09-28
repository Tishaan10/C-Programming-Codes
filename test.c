#include <stdio.h>
int main() {
    int num;

    printf("Enter an integer:");
    scanf("%d", &num);

    if (num % 2 == 0); {
        printf("0\n");
    }
    else {
        printf("1\n");
    }
    return 0;
}