#include<stdio.h>
void main()
{
    int n,arr[5],res=0,i=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        res=res+arr[i];


    }
    printf("sum of array is %d:",res);

}
