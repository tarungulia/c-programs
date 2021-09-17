#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    if((a>=10 && a<=20) | (b>=10 && b<=20))
        printf("18");
    else
        printf("%d",c);
    return 0;
    
}
