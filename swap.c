# include <stdio.h>
int main()
{
    int x,y,temp=0;
    printf ("enter the values of x and y");
    scanf("%d %d",&x,&y);
    printf ("the value of x is %d and value of y is %d, before swapping",x,y);
    temp = x;
    x = y;
    y = temp;
    printf ("after swapping, the value of x is %d and value of y is %d",x,y);
    return 0;
