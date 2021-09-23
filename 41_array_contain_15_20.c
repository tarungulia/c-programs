#include<stdio.h>
int main()
{
    int n=2,arr[n],i=0,count=0;
    for(i;i<2;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<2;i++)
    {
        if(arr[i]==15 || arr[i]==20)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("1");
    }
    else
    printf("0");
    return 0;
    
}