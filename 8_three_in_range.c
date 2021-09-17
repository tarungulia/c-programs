#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=20 & a<=50) || (b>=20 & b<=50) || (c>=20 & c<=50))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
