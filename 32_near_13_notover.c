#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a-13;
    d=b-13;
    if (a<13 && b<13)
    {
        if(c>d )
           {

            printf("%d",a);
           }
       else 
        {

        printf("%d",b);
        }
    
    }
    else
       {

        printf("0");}
}
/// error if one number is near 13 but over it