#include<stdio.h>
int main()
{
    int i=0,n=4,arr[n],temp,newarr[n];
    for(i;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    temp=arr[0];
    for(i=0;i<n;i++)
    {   
        newarr[i]=arr[i+1];
    }
    newarr[n-1]=temp;

    for(i=0;i<n;i++)
    {
        printf("%d ",newarr[i]);
    }
    return 0;
}