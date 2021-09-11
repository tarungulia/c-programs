#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    if(a==b)
    {
        int res=c*3;
        printf("Triple of sum is: %d",res);
    }
    else
    {
        printf("The sum is: %d",c);
    }

}
