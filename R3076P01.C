#include<stdio.h>
int main()
{
    int arr[20],i,n,p=-1;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("");
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1] && arr[i]>arr[p])
        {
            printf("%d ",arr[i]);
        }
    }
}
