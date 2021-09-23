#include<stdio.h>
int main()
{   
    int i=0,n=5,arr[n],count3=0,count5=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==3)
        {
            count3++;
        }
        if(arr[i]==5)
        {
            count5++;
        }
    }
    if(count3 > count5)
    {
        printf("1");
    }
    else
    printf("0");
    return 0;
}