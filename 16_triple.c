#include<stdio.h>
void main()
{
    int n,arr[n],i=0,count=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
            count=count+1;
    }
    if(count>0)
    {
        printf("1");
    }
    else
    printf("0");
}
