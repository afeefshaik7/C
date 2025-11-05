#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],m,n,p,q;
	int c[10][10],i,j,k;
	printf("enter rows n columns of matrix A:");
	scanf("%d%d",&m,&n);
	printf("enter rows n clumns of matrix B:");
	scanf("%d%d",&p,&q);
	if(n==p)
    {
		printf("Enter %d elements into A\n",m*n);
	    for(i=0;i<m;i++)
	    {
		   for(j=0;j<n;j++)
		   {
		   	  scanf("%d",&a[i][j]);
	       }
		}
	printf("Enter %d elements into B\n",p*q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    //logic for matrix product
    for(i=0;i<m;i++)
    {
	    for(j=0;j<q;j++)
	    {
	    	c[i][j]=0;
	    	for(k=0;k<n;k++)
	    	{
	    		c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
    }
    printf("Matrix product is\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<q;j++)
    	{
    		printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
  }
	else
	{
		printf("Matrix product not possible....");
	}
	return 0;
}
