#include<stdio.h>
int main()
{
	int fh,cl;
	printf("Enter celsius scale reading:");
	scanf("%d",&cl);
	fh=(cl+32)*(5/9);
	printf("the value of fahrent scale is %f",fh);
	return 0;
}
