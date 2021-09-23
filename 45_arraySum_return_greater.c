#include<stdio.h>
int main()
{
    int n=3,arr1[n],arr2[n],i=0,greater,sum1=0,sum2=0;
    printf("Enter 3 elements of array 1: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr1[n]);
    }
    printf("\n Enter 4 elements of array 2: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        sum1=sum1+arr1[i];
        sum2=sum2+arr2[i];
    }
    printf("Array having largest sum: ");
    for(i=0;i<n;i++)
    {
    if(sum1>sum2)
    printf("%d ",arr1[i]);
    else
    printf("%d ",arr2[i]);
    }
    return 0;
}