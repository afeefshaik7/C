/*units charge
0-30,2.5
31-70,4.0
71-150,6.0
151-250,8.0
>250,10.0
*/
#include<stdio.h>
int main()
{
	int units;
	float charge;
	printf("enter units:");
	scanf("%d",&units);
	if(units>=0&&units<=30){
	charge=units*2.5;}
	else if(units>=31&&units<=70){
		charge=30*2.5+(units-30)*4.0;
	}else if(units>=71&&units<=150){
		charge=30*2.5+70*4.0+(units-70)*6.0;
	}else if(units>=151&&units<=250){
		charge=30*2.5+70*4.0+150*6.0+(units-150)*8.0;
	}else if(units>250){
		charge=30*2.5+70*4.0+150*6.0+250*8.0+(units-250)*10.0;
	}else
	{
		printf("enter a valid units");
	}
	printf("the bill is%d",charge);
	return 0;
}
