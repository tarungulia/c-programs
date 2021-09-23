#include<stdio.h>
int main()
{
    int n,arr[n],i=0,half;
    printf("Enter the number of elements in even number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            printf("Enter %d element:",i+1);
            scanf("%d",&arr[i]);
        }
        half=n/2;
        printf("%d %d",arr[half-1],arr[half]);
        

    }
    else
    {
        printf("You have entered an odd number.\n");
        printf("Enter an even number.");
    }
}