#include<stdio.h>
int main()
{
	float fah,cel;
	// fahrenheit  to celsius 
	printf("Enter any number:");
	scanf("%f",&fah);
	cel=(fah-32.0)*(5.0/9.0);
	printf("the celsius scale reading is %f",cel);
	return 0;
	
}
