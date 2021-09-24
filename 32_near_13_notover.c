#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a-13;
    d=b-13;
    if(a>13 && b>13)
    {
        printf("0");
    }
    else
    {
        if(a>13 & b<13)
        printf("%d",b);
        else if(b>13 & a<13)
        printf("%d",a);
        else if(a<13 & b<13)
        {
            if(c>d)
            printf("%d",a);
            else
            printf("%d",b);
        }
    }
}
