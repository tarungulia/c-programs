#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    if(c>=10 & c<=20)
    {
        printf("30");
    }
    else
        printf("%d",c);
}
