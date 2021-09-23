#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if((a>10 && a<99) && (b>10 && b<99))
    {
        if(a%10==b%10)
            printf("1");
        else
            printf("0");
    }
    else
        printf("0");
}
