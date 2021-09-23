#include<stdio.h>
int main()
{
    int i=0,n=5,arr[n],count=0,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    if(n>=2)
    {
    for(i=0;i<n;i++)
    {  
        if(arr[i]==15 && arr[i+1]==15)
        {
            count++;
        }
       
    }
    if(count>0)
    printf("1");
    else
    printf("0");
    }
    else
    printf("Enter number of elements equal to 2 or greater.");
    return 0;
}