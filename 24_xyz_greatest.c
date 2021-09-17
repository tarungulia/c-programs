#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter value of x,y,z:");
    scanf("%d%d%d",&x,&y,&z);
    if(y>x && z>y)
        printf("1");
    else
        printf("0");
}
