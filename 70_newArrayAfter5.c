#include<stdio.h>
int main()
{
    int i=0,n=5,f=0,arr[n],newarr[f];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    
   for(i=0;i<n;i++)
    {
        if(arr[i]==5)
        {
            i++;
            for(i;i<n;i++)
            {
                newarr[f]=arr[i];
                f++;
            }
            
        }
        else
        {
            continue;
        }
     for(i=0;i<f;i++)
    {
        printf("%d ",newarr[i]);
    }
    
    }
return 0;
}