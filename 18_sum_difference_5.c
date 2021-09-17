#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a==5 || b==5 || a+b==5 || abs(a-b)==5)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
