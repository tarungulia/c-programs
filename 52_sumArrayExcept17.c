#include<stdio.h>
int main()
{
    int n=6,i=0,arr[n],sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==17)
        {
         continue;
        }
        else if(arr[i]!=17)
        {sum=sum+arr[i];
        }
    }
    printf("sum of values in array without 17 is:%d",sum);

    return 0;

}