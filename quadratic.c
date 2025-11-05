#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,root1,root2;
	printf("Enter coffectient of first variable:");
	scanf("%f",&a);
	printf("Enter coffectient of second variable:");
	scanf("%f",&b);
	printf("Enter constant:");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);//discriminat
	if(d==0){
		root1=-(b/2*a);
		root2=-(b/2*a);
		printf("roots are real and equal");
		printf("the roots of a quadrtic equation are %.2f%.2f",root1,root2);}
		else if(d>0){
		root1=-(b+sqrt(d))/(2.0*a);
		root2=-(b-sqrt(d))/(2.0*a);
		printf("roots are real and distinct");
		printf("the roots of a quadrtic equation are %.2f%.2f",root1,root2);
		}
		else{
		root1=-b/(2*a);
		root2=(sqrt(-d))/(2*a);
		printf("roots are imaginary and distinct");
		printf("the roots of a quadrtic equation are %.2f%.2f",root1,root2);
		}
	return 0;}
