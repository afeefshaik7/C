#include<stdio.h>
int main()
{
	int count=0,i,n;
	printf("Enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	{
		if(n%i==0){
			count=count+1;
		}
	}if(count==2){
		printf("%dis a prime number",n);
	}else{
			"It is not";
	}

return 0;}
