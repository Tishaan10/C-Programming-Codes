#include <stdio.h>

int main() {
    int hours, minutes, seconds, total;

    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    total = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds = %d", total);
    return 0;
}