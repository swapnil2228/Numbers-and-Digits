//write a program which accept two numbers and find LCM

#include<stdio.h>
int main(){
	int numerator,denominator,reminder,firstnum,secondnum,lcm;
	printf("enter the first number:");
	scanf("%d",&firstnum);
	printf("enter the second number:");
	scanf("%d",&secondnum);
	if(firstnum>secondnum){
		numerator=firstnum;
		denominator=secondnum;
	}
	else{
		numerator=secondnum;
		denominator=firstnum;
	}
	reminder=numerator%denominator;
	while(reminder!=0){
		numerator=denominator;
		denominator=reminder;
		reminder=numerator%denominator;
	}
	lcm=(firstnum*secondnum)/denominator;
	printf("LCM is :%d",lcm);
	return 0;

}
