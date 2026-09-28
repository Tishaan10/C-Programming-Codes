#include <stdio.h>

int main()
{
    int day;

    printf("Enter the value of day between 1 to 7: ");
    scanf("%d", &day);

    if (day == 1)
    {
        printf("Sun\n");
    }
    else if (day == 2)
    {
        printf("Mon\n");
    }
    else if (day == 3)
    {
        printf("Tue\n");
    }
    else if (day == 4)
    {
        printf("Wed\n");
    }
    else if (day == 5)
    {
        printf("Thu\n");
    }
    else if (day == 6)
    {
        printf("Fri\n");
    }
    else if (day == 7)
    {
        printf("Sat\n");
    }
    else
    {
        printf("Invalid day. Please enter a value between 1 and 7.\n");
    }

    return 0;
}