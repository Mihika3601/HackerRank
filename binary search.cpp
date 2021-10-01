#include<stdio.h>
main()
{
	int a[100],i,n,high,low,mid,key,found=0;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter the array elements in an ascending order \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key element \n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high && !found)
	{
		mid=(low+high)/2;
		if (a[mid]==key)
		{
			found=1;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
		else 
		{
			high=mid-1;
		}
	}
	if (found==1)
	{
		if(mid+1==1)
		{
			printf("Element is found at %dst position \n",mid+1);
		}
		else if(mid+1==2)
		{
			printf("Element is found at %dnd position \n",mid+1);
		}
		else if (mid+1==3)
		{
			printf("Element is found at %drd position \n",mid+1);
		}
		else 
		{
			printf("Element is found at %dth position \n",mid+1);
		}
	
	}
	else 
	{
		printf("Not found \n");
	}
}
