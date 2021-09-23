#include<stdio.h>
int main()
{   
    int n=6,arr[n],i=0,count=0;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
    
    }
    if(count>0)
    printf("%d",count);
    else
    printf("No even number in array.");
    return 0;
}