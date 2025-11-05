#include<stdio.h>
int gcd(int,int);
int gcd(int a,int b)
{
	int r,m;
	m=(a>b)?b:a;
	if(a==0)
	return b;
	else if(b==0)
	return a;
	else
	{
		while(m!=0)
		{
			r=a%m;
			a=m;
			m=r;
		}
	}
	return a;
}
int main()
{
	int a,b,g,l;
	scanf("%d%d",&a,&b);
	l=(a*b)/gcd(a,b);
	printf("%d",l);
	
}
