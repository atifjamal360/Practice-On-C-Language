#include<stdio.h>
#include<conio.h>
struct student
{
	char name[10];
	int roll;
}stu;
int main()
{
	struct student *p;
	p=&stu;
	
	printf("Enter A Name Of Student:");
	gets(p->name);
	
	printf("Enter A Roll No. Of Student:");
	scanf("%d",&p->roll);
	
	printf("*************output*************");
	
	printf("\nEnter A Name Of Student:%s",((*p).name));
	
	printf("\nEnter A Roll No. Of Student:%d",(*p).roll);
	
}
