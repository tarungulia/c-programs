#include<stdio.h>
int main()
{
    int n=3,i,arr1[n],arr2[n],m=0,newarr[10];
    for(i;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        newarr[m]=arr1[i];
        m++;
    }
    for(i=0;i<n;i++)
    {
        newarr[m]=arr2[i];
        m++;
    }    
    for(i=0;i<m;i++)
    {
        printf("%d",newarr[i]);
    }

    return 0;
}