#include<stdio.h>
int main()
{
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	if(num%3==0 && num%5==0)
	printf("the number is divisible by both 3 and 5");
	else
	printf("the number is not divisible by both 3 and 5");
}
