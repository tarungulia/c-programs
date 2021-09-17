#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    int c=abs(a-100);
    int d=abs(b-100);
    if(c<d)
    {
        printf("%d is nearest to 100",a);
    }
    else if(a==b)
    {
        printf("0");
    }
    else
    {
        printf("%d is nearest to 100",b);
    }

}
