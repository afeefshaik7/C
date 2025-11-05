#include<stdio.h>
struct student
{
	int rollno;
	char name[30];
	int marks;
}std1,std2,std3;
int main()
{
	struct student std1={108,"Varun reddy",99};
	printf("roll no %d\t student name %s\t marks is %d",std1.rollno,std1.name,std1.marks);
	struct student std2={107,"Sai",100};
	std3=std2;
	printf("\nroll no %d\t student name %s\t marks %d",std3.rollno,std3.name,std3.marks);
	
	return 0;
}
