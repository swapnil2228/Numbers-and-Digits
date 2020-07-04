//write a program which accept percentage from user and print class as (greater than 70:Distiction, greater than 60: First class,Greater than 50: second class
//,greater than 40: pass class otherwise fail.
//INPUT:78.9
//OUTPUT: Distinction



#include<stdio.h>
int main()
{
	float n;
	printf("enter percentage");
	scanf("%f",&n);
	if(n>=70)
		printf("Distinction");
	else if(n>=60)
		printf("first class");
	else if(n>=50)
		printf("second class");
	else if(n>=40)
		printf("pass class");
	else
		printf("fail");
	return 0;
}
