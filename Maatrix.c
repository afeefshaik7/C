#include<stdio.h>
int main()
{
	int a[10][10],m,n;
	int i,j;
	printf("Enter no. of rows and cols of A:");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
	printf("Enter %d elements\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" Lower triangle Matrix elements are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
    }//end of if
    else
    {
    printf("Please enter square matrix:");
    }
	return 0;
}
