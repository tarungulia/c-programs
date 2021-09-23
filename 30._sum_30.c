#include<stdio.h>
void main()
{
    int a,b,c,sum;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(a!=13 || b!=13 || c!=13)
    {
        if(a==13)
        printf("%d",b+c);
    else if(b==13)
         printf("%d",a+c);
    else if(c==13)
         printf("%d",a+b);
   
    else
        printf("%d",sum);
    }
    else
    printf("0");
}

