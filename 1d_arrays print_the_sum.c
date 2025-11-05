#include<stdio.h>
int main()
{
	int a[20],n,i,s=0;
	printf("enter size of an array:\n");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("Suum of elements is %d",s);
	return 0;
}
