#include<stdio.h>
void main()
{
    int n,arr[n],i=0,count=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
    if(arr[i]==5 && arr[i+1]==5 || arr[i+1]==6)
    {
        count=count+1;
    }
    }
    printf("%d",count);
}
