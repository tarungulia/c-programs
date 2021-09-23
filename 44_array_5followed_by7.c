#include<stdio.h>
int main()
{
    int n=3,arr[n],newarr[n],i=0;
    printf("Enter 3 elements in array. \n ");
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        
        if(arr[i]==5 && arr[i+1]==7)
        {
            arr[i+1]=1;
        }
        newarr[i]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",newarr[i]);
    }
 return 0;   
}