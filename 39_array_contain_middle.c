#include<stdio.h>
int main()
{
    int n=5,arr1[n],arr2[n],newarr[2],i=0;
    printf("Enter 5 elements for array 1\n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter 5 elements of array 2\n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr2[i]);
    }
    i=0;
    newarr[i]=arr1[2];
    newarr[i+1]=arr2[2];


    for(i=0;i<2;i++)
    {
            printf("%d ",newarr[i]);
    }
return 0;
}
