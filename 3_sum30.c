#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    if(a==30 || b==30 || a+b==30)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
