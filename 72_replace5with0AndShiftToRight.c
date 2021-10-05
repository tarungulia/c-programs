#include<stdio.h>
int main()
{
    int i=0,n=5,arr[n],j=n-1;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==5)
        {   arr[i]=0;
            if(arr[j]==5)
            {
                arr[j]=0;
            }
            arr[i]=arr[j];
            arr[j--]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}