#include<stdio.h>
int main()
{
	int rate;
	printf("rate the movie 'the lion king' from 1-5: \n");
	scanf("%d",&rate);
	switch(rate)
	{
		case 1:
			printf("terrible");
			break;
		case 2:
		    printf("poor");
		    break;
		case 3:
			printf("average");
			break;
		case 4:
		    printf("good");
		    break;
		case 5:
			printf("excellent");	
			break;
		default:
		printf("no comments");	
	}
}
