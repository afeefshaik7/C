#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	int a,b,g;
	scanf("%d%d",&a,&b);
if(a>b)
g=gcd(b,a);
else
g=gcd(b,a);
printf("%d",(a*b)/g);
return 0;}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}
