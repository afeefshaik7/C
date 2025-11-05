#include<stdio.h>
int main()
{
	int a[10][10],m,n,p,q,i,j;
	printf("Enter rows and colms of A:");
	scanf("%d%d\n",&m,&n);
	printf("Enter rows and colms of B:");
	scanf("%d%d\n",&p,&q);
	if((m==q)&&(n==q)){
		printf("Enter %d elements into A",m*n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
			 	printf("Enter %d elements into B",p*q);
		for(i=0;i<p;i++){
			for(j=0;j<q;j++){
				scanf("%d",&a[i][j]);
		}}
	}}return 0;
}
