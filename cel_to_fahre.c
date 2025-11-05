#include<stdio.h>
int main()
{
	int fh,cl;
	printf("Enter celsius scale reading:");
	scanf("%d",&cl);
	fh=((9.0/5.0)*cl)+32;
	printf("the value of fahrent scale is %d",fh);
	return 0;
}
