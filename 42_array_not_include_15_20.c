#include<stdio.h>
int main()
{
    int n=2,arr[n],i=0,count=0;
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if((arr[i]==15) || (arr[i]==20))
        {
            count++;
        }
        
    }
    if(count>0)
        {printf("0");}
    else
    printf("1");
    return 0;
}