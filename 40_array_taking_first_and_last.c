#include<stdio.h>
int main()
{
    int n=5,arr[n],newarr[2],i=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    i=0;
    newarr[i]=arr[i];
    newarr[i+1]=arr[n-1];
    for(i=0;i<2;i++)
    {
        printf("%d ",newarr[i]);
    }
return 0;
}
