#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count=count+1;
		}
	}if(count==2)
	{
		printf("It is a prime number");
	}else{
		printf("Not a prime");
	}return 0;
}
