#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter number: ");
    scanf("%d",&a);
    if((a%3==0 && a%7!=0) | (a%7==0 && a%3!=0) )
    {
        printf("1");
    }
    else
        printf("0");
}
