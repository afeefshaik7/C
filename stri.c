#include<stdio.h>
int main()
{
	char s1[10],s2[20];
	int i,j,length;
	printf("Enter the string1");
	gets(s1);
	printf("Enter the string2");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		length=length+1;
	}	for(i=length,j=0;s2[j]!='\0';i++,j++)
	{
		s1[i]=s2[j];
	}	s1[i]='\0';
	printf("The joined string is %s",s1 );
	return 0;
}
