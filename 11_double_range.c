#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if((a>=40 & a<=60) && (b>=40 & b<=60))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
