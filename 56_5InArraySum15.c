#include<stdio.h>
int main()
{
    int i=0,n=5,m=0,arr[n],arrsum[m],sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==5)
        {
            arrsum[i]=arr[i];
            m++;
        }

    }
    for(i=0;i<m;i++)
    {
        sum=sum+arrsum[i];
    }
    if (sum==15)
    {
        printf("1");
    }
    else
    printf("0");  
    return 0;
}