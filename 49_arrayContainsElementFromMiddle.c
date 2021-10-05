#include<stdio.h>
int main()
{
    int i=0,n=6,arr[n],newarr[3];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    if(n%2==0)
    {
        n=n/2;
        for(i=0;i<3;i++)
        {
          newarr[i]=arr[n-1];
          n++;  
        }
    }
    else
    {   n+1;
        n=n/2;
        for(i=0;i<3;i++)
        {
            newarr[i]=arr[n];
            n++;
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d",newarr[i]);
    }
    return 0;

}