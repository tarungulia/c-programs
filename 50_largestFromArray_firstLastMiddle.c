#include<stdio.h>
int main()
{
    int n,arr[n],i=0,first,last,middle;
    printf("Enter number of elements of array.");
    scanf("%d",&n);
    if(n%2!=0)
    {
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    first=arr[0];
    middle=arr[n/2];//discuss n-1 and n concept
    last=arr[n-1];

    if(first>last && first > middle)
    {
        printf("%d",first);
    }
    else if(last>first && last>middle)
    {
        printf("%d",last);
    }
    else
    printf("%d",middle);
    }
    else
    {
        printf("Enter an odd number.");
    }
    return 0;

}