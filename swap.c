#include<stdio.h>
int main()
{
   int x,y,z;
    printf("enter 2 values");
    scanf("%d%d",&x,&y);
    printf("before swap value of x is %d  and y is %d",x,y);
    z=x;
    x=y;
    y=z;
    printf("\n after swapping values of x is %d and value of y is %d",x,y);
    return 0;
}

