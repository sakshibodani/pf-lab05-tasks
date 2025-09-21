#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
	((num1==num2) ? printf("both numbers are equal") : (num1 > num2)  ? printf("Maximum is: %d\n", num1) :
                     printf("Maximum is: %d\n", num2));
	
	
}
