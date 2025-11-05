#include<stdio.h>
int main()
{
	int a[10][10],m,n;
	int i,j,s=0;
	printf("enter no of rows and columns of A:");
	scanf("%d%d",&m,&n);
	printf("enter %d elements\n",m*n);
	if(m==n)
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("Matrix elements are in:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
					if(i==j)
			s=s+a[i][j];
		}
		printf("\n");
	}
	printf("sum of diagonal elements:%d",s);
	return 0;
}


