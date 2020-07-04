//write a program which accept a number and print the sum of its digits.
//input:1234 output:10



#include<stdio.h>
int main(){
	int num,temp,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0){
		temp=num%10;
		sum=sum+temp;
		num=num/10;
	}
	printf("%d",sum);
	return 0;
}
