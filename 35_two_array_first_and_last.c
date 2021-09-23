#include<stdio.h>
int main()
{
    int n,m,arr1[n],arr2[m],i;
    printf("Enter number of elements of array 1: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) //discuss output array 1 elemtn is one less than value
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("\n Enter number of elements of array 2: ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr2[i]);
    }
    if((arr1[1]==arr2[1]) | (arr1[n-1]==arr2[m-1]))
    {
        printf("1");
    }
    else
        printf("0");
    return 0;
}
