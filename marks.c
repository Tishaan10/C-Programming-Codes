#include <stdio.h>
int main()
{
    int pMO, mMO, total;
    printf("Enter the marks obtained in Physics and Maths:");
    scanf("%d %d",&pMO, &mMO);
    total = (((30/100)*pMO) + ((70/100)*mMO));
    printf("The total is %d", total);
    return 0;

}