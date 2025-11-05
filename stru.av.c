#include<stdio.h>
struct student
{
	int rollno;
	char name[40];
	int tel,hindi,eng,maths;
	float total,average;
};
int main()
{
	struct student s[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter roll no,name,tel marks,hindi marks,eng marks,maths marks");
		scanf("%d%s%d%d%d%d",&s[i].rollno,&s[i].name,&s[i].tel,&s[i].hindi,&s[i].eng,&s[i].maths);
	}printf("Roll no\tTotal\taverage\t\n");
		for(i=0;i<n;i++){  
		s[i].total=s[i].tel+s[i].hindi+s[i].eng+s[i].maths;
		s[i].average=(s[i].tel+s[i].hindi+s[i].eng+s[i].maths)/4;
		printf("%d\t%f\t%f\n",s[i].rollno,s[i].total,s[i].average);
}return 0;
}
