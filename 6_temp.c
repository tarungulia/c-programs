#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a<0 || a>100)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
