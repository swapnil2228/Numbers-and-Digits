//write a program which accpet number from user and if numer is less than 50 then print small,if it is greater than 50 and less than 100
//then print medium,if it is greater than 100 then print large.
//INPUT: 75
//OUTPUT:Medium


#include<stdio.h>
int main()
{
	int n;
	printf("\n Enter the number...");
	scanf("%d",&n);
	if(n<50 && n>=0)
		printf("small");
	else if(n>50 && n<100)
		printf("medium");
	else	
		printf("large");
	return 0;
}
