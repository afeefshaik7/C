#include<stdio.h>
int main()
{
	char s1[100];
	int i;
	printf("Enter any string:");
	scanf("%[^\n]",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[0]>='a' && s1[0]<='z')
		{
			s1[i]=s1[i]-32;
		}
    }
    printf("\n Sentential string is: %s",s1);
    return 0;
}
