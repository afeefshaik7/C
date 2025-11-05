#include<stdio.h>
int main()
{
	int a[20],i,n,min,max,min_pos,max_pos;
	printf("Enter size of the array:");
	scanf("%d",&n);
	printf("Enter %d elements",n);
	for(i=0;i<n;i++);
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	min_pos=max_pos=0;
	for(i=0;i<n;i++);
	{
		if(a[i]>max){
			max=a[i];
			max_pos=i+1;
		}
		if(a[i]<min)
		{
			min=a[i];
			min_pos=i+1;
		}
	}
	printf("Max element is %d located at %d",max,max_pos);
		printf("Min element is %d located at %d",min,min_pos);
return 0;}
