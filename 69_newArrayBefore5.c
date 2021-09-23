#include<stdio.h>
int main()
{
    int i=0,n=5,arr[n],m,newarr[m];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter %d elements:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==5)
        {
            m=i;
            break;
        }
        else
        {
            newarr[i]=arr[i];
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",newarr[i]);
    }
    return 0;
}