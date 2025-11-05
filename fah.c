#include<stdio.h>
int main()
{
	float a,fah,cel;
	//celsius to fahrenheit
	printf("Enter any number:");
	scanf("%f",&cel);
	fah=(cel*(9.0/5.0))+32.0;
	printf("the fahrenheit scale reading is %f",fah);
	return 0;
	
}
