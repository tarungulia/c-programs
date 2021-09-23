#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    if(a!=b)
    {
        if(a%5==b%5)
        {   if(a>b)
                printf("%d is smaller. ",b);
            else
                printf("%d is smaller.",a);
        }
        else
            {
              if(a>b)
                printf("%d is greater.",a);
              else
                printf("%d is greater.",b);
            }
                }
    else
        printf("0");

}
