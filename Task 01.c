#include<stdio.h>
int main()
{
	printf("TRAFFIC LIGHT SYSTEM!!!!\n");
	char color;
		printf("enter R for red, Y for yellow and G for green:\n ");
	scanf("%c",&color);
	if(color=='r'|| color=='R')
		printf("STOP!");
	else if(color=='y'|| color=='Y')
		printf("CAUTION!");
	else if(color=='g'||color=='Y')
		printf("GO!");
	else
		printf("enter a valid traffic color!");
}
