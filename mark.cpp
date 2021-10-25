#include<stdio.h>
void display(struct student);
struct student
{
	int rno;
	char name[10];
	float marks;
}s1={501,"sandeep",95};
 main()
 {
 	struct student *ptr;
 	ptr=&s1;
 	printf("%d %s %f",ptr->rno,ptr->name,ptr->marks);
 }
