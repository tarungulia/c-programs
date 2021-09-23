#include<stdio.h>
int main()
{
    int i=0,n=5,arr[n],count=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i+1]%2==0) || arr[i]%2!=0 && arr[i+1]%2!=0)
        {
            count++;
        }
    }
    if(count>0)
    printf("1");
    else
    printf("0");
    return 0;
}