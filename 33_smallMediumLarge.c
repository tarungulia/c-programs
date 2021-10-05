#include<stdio.h>
int main()
{
    int a,b,c,small,medium,large,d1,d2;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b & a>c)
    large=a;
    else if(b>a & b>c)
    large=b;
    else 
    large=c;
    if(a==large)
    {
        if(b>c)
        {
            medium=b;
            small=c;
        }
        else
        {
            medium=c;
            small=b;
        }
    }
//if b is large
if(b==large)
    {
        if(a>c)
        {
            medium=a;
            small=c;
        }
        else
        {
            medium=c;
            small=a;
        }
    }
//if c is large
    if(c==large)
    {
        if(a>b)
        {
            medium=a;
            small=b;
        }
        else
        {
            medium=b;
            small=a;
        }
    }
    d1=medium-small;
    d2=large-medium;
    if(d1==d2)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}