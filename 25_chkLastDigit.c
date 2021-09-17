#include<stdio.h>
int main()
{
    int a,i,n=6,arr[n],count=0;
    printf("Enter the number of digits:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]%10==arr[i+1]%10)
        {
            count++;
        }
        else
        count=0;
        break;
    }
    if(count>1)
    {
        printf("1");
    }
    else
    printf("0");
    return 0;
}