#include<stdio.h>
int main()
{
	int age;
	printf("enter your age: ");
	scanf("%d",&age);
	if(age<=10)
		printf("child");
	else if(age>10 && age<=19)
		printf("teenager");
	else if(age>19 && age<=40)
		printf("adult");
	else
		printf("senior");
}
