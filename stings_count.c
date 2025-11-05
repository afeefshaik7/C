#include<stdio.h>
int main()
{
	char s1[100];
	int i,alpha=0,upper=0,lower=0,vowel=0,cons=0,digit=0,space=0,spl=0;
	printf("Enter a string:");
	scanf("%[^\n]",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='A'&&s1[i]<='Z')||(s1[i]>='a'&&s1[i]<='z'))
		{
			alpha++;
			if(s1[i]>='A'&&s1[i]<='Z')
			{
				upper++;
			}
			if(s1[i]>='a'&&s1[i]<='z')
			{
				lower++;
			}
			switch(s1[i])
			{
				case 'a':case'A':
				case 'i':case'I':
				case 'e':case'E':                
				case 'o':case'O':
				case 'u':case'U':
				vowel++;
				break;
				default:
				cons++;		
			}
		}//end of if
		else if(s1[i]>='0'&&s1[i]<='9')
		{
			digit++;
		}
		else if(s1[i]=' ')
		{
			space++;
		}
		else{
			spl++;
		}//end of for
	}
		printf("\nNO. of Alphabets: %d",alpha);
		printf("\nNO. of uppercase: %d",upper);
		printf("\nNO. of lowercase: %d",lower);
     	printf("\nNO. of vowels: %d",vowel);
		printf("\nNO. of consonants: %d",cons);
		printf("\nNO. of digits: %d",digit);					
		printf("\nNO. of spaces: %d",space);
    	printf("\nNO. of spl: %d",spl);
	return 0;
	//end of main
}
