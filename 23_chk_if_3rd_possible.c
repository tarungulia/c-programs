#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b==c || a+c==b || b+a==c || b+c==a || c+a==b || c+b==a)
    {
        printf("1");
    }
    else
        printf("0");

}
