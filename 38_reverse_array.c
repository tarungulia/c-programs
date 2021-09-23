#include<stdio.h>
void main()
{
    int n,arr[10],newarr[10],i=0,j=0;
    printf("Enter 5 elements of array.\n");
    for(i;i<5;i++)
    {

        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
       newarr[i]=arr[4-i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",newarr[i]);
    }
}
