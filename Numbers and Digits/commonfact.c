//write a program which accept two numbers and print its common factors
//donhi number la same number ni divide jhal tr te common factor

#include<stdio.h>
int main(){
	int no1,no2,i;
	
	printf("enter the first number:");
	scanf("%d",&no1);
	printf("enter the second number:");
	scanf("%d",&no2);
	if(no1<0 && no2<0){
		return 0;
	}
	for(i=1;i<=no1 && i<no2; i++){
		if(no1%i==0 && no2%i==0){
			printf("%d\t",i);
		}
	}
	return 0;
}
