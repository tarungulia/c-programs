#include<stdio.h>
void main()
{
    int a,b,c,sum;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(a==b)
      printf("%d",c);
    else if(b==c)
      printf("%d",a);
    else if(a==c)
        printf("%d",b);
    else
       printf("%d",sum);

}
