#include<stdio.h>
int main()
{
	char s[20];
	scanf("%s",s);
	int a=0;
	int i;
	for( i=0;s[i]!='\0';i++)
	{
		s[i]-'0';
		a=a+s[i];
	}
	printf("%d",a);
}
