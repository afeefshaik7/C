#include<stdio.h>
int main()
{
	int a[20],n,flag=0,i,pos,key;
	printf("enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to search:\n");
	scanf("%d",&key);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
		   flag=1;
		   pos=i+1;
		   break;
	    }
    }
    if(flag==1)
    {
    	printf("Element %d Found at%d\n",key,pos);
	}
	else
	{
		printf("element %d Not Found.",key);
	}
	return 0;
}
	
