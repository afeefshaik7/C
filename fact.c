#include<stdio.h>
int fact(int);
int fact(int n){
if(n==0){
	return 1;
}else{
	(n*fact(n-1));
}
int main(){
	int factorial;
	printf("enter the num");
	scanf("%d",&n);
	factorial=fact(n);
	printf("the factorial of %d ",factorial);
	return 0;
}



}
