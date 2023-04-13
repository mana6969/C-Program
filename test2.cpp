#include<stdio.h>
struct student 
{
	char name[20];
	int roll_no;
	float mark;
	char gender[8];
	long long int phone_no;
}s1;
int main()
{
	struct student s1;
	printf("Enter details:\n");
	scanf("%s%d%f%s%lld",s1.name,&s1.roll_no,&s1.mark,s1.gender,&s1.phone_no);
	printf("\n Name-%s \n roll_no-%d \n marks-%f \n gender-%s \n phone_no-%lld",s1.name,s1.roll_no,s1.mark,s1.gender,s1.phone_no);
	return 0;
}
