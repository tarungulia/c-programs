#include<stdio.h>
int main()
{
    int i=0,n=5,arr[n],temp,j=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Elements in original array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }    
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }

    
    printf("\nElements in new array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }    

    return 0;
}