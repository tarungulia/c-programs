#include<stdio.h>
int main()
{
    int n=6,arr[n],i=0,count1=0,count2=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    if(n<4)
    {
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==10)
        {count1++;}
        if(arr[i]==20)
        {count2++;}

    }
    if(count1>=2 || count2>=2)
    printf("1");
    else
    printf("0");
    }
    else
    printf("Array length is out of limit.");
    return 0;
}
