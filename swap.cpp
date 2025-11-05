#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter ");
	scanf("%d",&n);
	for(i=1;i<=(n-1);i++);
	{
			printf("%d",b);
		c=a+b;
		a=b;
		b=c;
	}

	return 0;
}
