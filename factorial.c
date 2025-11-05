#include<stdio.h>
int fact(int);
int fact(int x)
{
	if(x==0)
	return 1;
	else;
	return x*fact(x-1);
}
int main()
{
	int facto,num;
	printf("Enter the number:");
	scanf("%d",&num);
	facto=fact(num);
	printf("The factorial of the number is: %d",facto);
	return 0;
}
