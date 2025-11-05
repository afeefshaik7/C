#include<stdio.h>
int main()
{
	int a[50],n,i,l,r,f=0,mid,pos,k;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter %d the elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter The element you want to search:");
	scanf("%d",&k);
	l=0;
	r=n-1;
	while (l<=r)
	{
		mid=(l+r)/2;
		if(k==a[mid])
		{
			pos=mid+1;
			f=1;
			break;
		}
		else if(k<a[mid])
		r=(mid-1);
		else
		l=mid+1;
		
	}
	if(f==1)
	printf("%d is found at the position:%d",k,pos);
	else
	printf("NO element found");
	return 0;
}
