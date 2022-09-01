#include<stdio.h>
int main()
{
    int x;
    printf("enter a no");
    scanf("%d",&x);

    if((x&1)==0)
     {

       printf("even");
     }
    else
      {
 printf("odd");
      }
    return 0;
}
