#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    if((a<=200 & a>=100) || (b>=100 & b<=200))
    {
        printf("1");
    }
    else
    {
        printf("0");;
    }
}
