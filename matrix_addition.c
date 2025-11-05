#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],m,n,p,q;
	int c[10][10],i,j;
	printf("Enter rows n cols of matrix A:");
	scanf("%d%d",&m,&n);
	printf("Enter rows n cols of matrix B:");
	scanf("%d%d",&p,&q);
	if((m==p)&&(n==q))
	{
		printf("Enter %d elements into A\n",m*n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter %d elements into B\n",p*q);
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		//performing matrix addition
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		//displaying resultant matrix
		printf("Matrix Addition elements are:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}//end of if
	else
	{
		printf("Matrix Add not possible..");
	}
	return 0;
}
