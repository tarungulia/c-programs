#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter a number to check multiple of 13: ");
    scanf("%d",&a);
    a=abs(a);
    b=a-1;
    if(a%13==0 || b%13==0)
    {
        printf("1");
    }

    else
    {
        printf("0");
    }
}
