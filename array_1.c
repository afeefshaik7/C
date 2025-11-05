#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c,i,j,n,m,k,l;
	printf("Enter rows and colums of A");
	scanf("%d %d",&n,&m);
		printf("Enter rows and colums of B");
	scanf("%d %d",&k,&l);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}	for(i=0;i<k;i++){
		for(j=0;j<l;j++){
			scanf("%d",&b[i][j]);
		}
	}for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}printf("\n");
		for(i=0;i<k;i++)
		{
		for(j=0;j<l;j++)
		{
			printf("%d ",b[i][j]);
		}printf("\n");
		
	}}}return 0;
}
