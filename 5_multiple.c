#include<stdio.h>
void main()
{
    int a;
    printf("Enter +ve integer: ");
    scanf("%d",&a);
    if(a%3==0 || a%7==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
