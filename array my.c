#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,m;
	printf("Enter rows and colums:");
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",&a[i][j]);
		}printf("\n");
	}return 0;
}
