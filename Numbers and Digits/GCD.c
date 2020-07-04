//write a program which accept two numbers and find GCD.
#include<stdio.h>
int main(){
	int numerator,denominator,reminder,n1,n2;
	printf("enter the first numeber:");
	scanf("%d",&n1);
	printf("ente the second number");
	scanf("%d",&n2);
	if(n1>n2){
		numerator=n1;
		denominator=n2;
	}
	else{
		numerator=n2;
		denominator=n1;
	}
	reminder=numerator%denominator;
	while(reminder!=0){
		numerator=denominator;
		denominator=reminder;
		reminder=numerator%denominator;
	}
	printf("GCD is :%d",denominator);
	return 0;
}
