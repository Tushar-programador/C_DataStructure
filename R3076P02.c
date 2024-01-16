#include<stdio.h>
int fr[100];
int main()
{
	int n;
	int i;
	int arr[100];
	printf("Enter the size of an array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		fr[arr[i]]++;
		
	}
	for(i=0;i<n;i++)
	{
		if(fr[i]==0)
		{
			printf("%d element is missing");
		}
	}
	printf("\n Frequency of the element are ");
	for(i=0;i<n;i++)
	{
		if(fr[i])
		{
			printf("%d=%d",i,fr[i]);
		}
	}
	return 0;
	
}