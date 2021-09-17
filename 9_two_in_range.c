#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    if((a>=20 & a<=50) || (b>=20 & b<=50))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
