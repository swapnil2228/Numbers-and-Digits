//Write a program which accept number and print only even digits in that number.
//input:123456 output: 12

#include<stdio.h>
int main(){
	int num,sum=0,idig;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0){
		idig=num%10;
		if(idig%2==0){
			sum+=idig;
			printf("%d\n",idig);
		}
		num=num/10;
	}
	printf("\n==============================\n");

	printf("%d",sum);
	return 0;
}

