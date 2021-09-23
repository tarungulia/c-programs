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
        if((arr[i]==3 && arr[i+1]==3) || (arr[i]==5 && arr[i+1]==5))
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