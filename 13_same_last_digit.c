#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=abs(a%10);
    d=abs(b%10);
    if(c==d)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
