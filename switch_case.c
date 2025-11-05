#include<stdio.h>
int main()
{
	int a,b;
	char n;
	scanf("%c",&n);
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	switch(n){
	case '+':printf("%d",a+b);
	break;
    case '-':printf("%d",a-b);
	break;
	case '/':printf("%d",a/b);
	break;
	case '%':printf("%d",a%b);
	break;
	default:printf("Invalid");
}
}
