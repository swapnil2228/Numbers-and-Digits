//Write a program that accepts a number and print in reverse order.
#include<stdio.h>
int main(){
	int num,rev=0,temp;
	printf("enter the numebr");
	scanf("%d",&num);
	while(num!=0){
		temp=num%10;
		printf("%d",temp);
		num=num/10;
	}
	return 0;
}
