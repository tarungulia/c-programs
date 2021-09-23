#include<stdio.h>
int main()
{
    int n=5,arr[n],i=0,newarr[n];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    if(n>0)
    {
    for(i=0;i<n;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    { 
        newarr[i]=arr[i];
    }
    newarr[0]=arr[n-1];
    newarr[n-1]=arr[0];
    for(i=0;i<n;i++)
    {
        printf("%d ",newarr[i]);
    }

    }
    else
    printf("number of elements less then 1;");
    
    return 0;
}