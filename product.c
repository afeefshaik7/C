#include<stdio.h>
int main()
{
    int a[20],n,i,x;
	printf("enter size of an array:\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	x=1;
	for(i=0;i<n;i++)
	{
		x=x*a[i];
    }
    printf("the product is :%d\n",x);
    return 0;
}
