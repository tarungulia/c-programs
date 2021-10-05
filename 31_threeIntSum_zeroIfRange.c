#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>10 & a<20)
    {
        if(a==13 || a==17)//discuss not equal concept
        {
            a=a;
        }     
        else
        a=0;
    }
    if(b>10 & b<20)
    {
        if(b==13 || b==17)
        {
            b=b;
        }
        else
        b=0;
    }
    if(c>10 & c<20)
    {
        if(c==13 || c==17)
        {
            c=c;
        }
        else
        c=0;
    }
    sum=a+b+c;
    printf("sum is:%d",sum);   
    return 0;
}