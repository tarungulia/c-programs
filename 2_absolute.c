#include<stdio.h>
#include<stdlib.h>
void main()
{   int a,b=51;
    printf("Enter a number: ");
    scanf("%d",&a);
    int res=abs(a-51);
    if(a>51)
    {   int c=res*3;
        printf("%d",c);
    }
    else
    {
        printf("%d",res);
    }

}
