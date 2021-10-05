#include<stdio.h>
int main()
{
    int i=0,j=0,n=5,arr[n],newarr[n],temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
      printf("Enter element %d:",i+1);
      scanf("%d",&arr[i]);
    }

    printf("original array:");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<5;i++)
    {   
        if(arr[i]==0)
        {
            arr[i]=arr[j];
            arr[j++]=0;

        }
    }
    printf("\n shifted array:");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}