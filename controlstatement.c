#include <stdio.h>

int main()
{
    int x = 10, y = 20;

    if (x != y)
    {
        printf("x is not equal to y\n");

        if (x > y)
        {
            printf("x is greater than y\n");
        }
        else
        {
            printf("x is less than y\n");
        }
    }
    else
    {
        printf("x is equal to y\n");
    }

    return 0;
}