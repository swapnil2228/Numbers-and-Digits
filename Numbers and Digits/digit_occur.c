//Accept one number as well as accept one digit and check whether that digit is occurs in your no or not.
//input: 1234 5 output: FALSE  input:1234 3 output:Truei

#include<stdio.h>
int main(){
	int num,dig,idig=0;
	int flag=0;
	printf("enter the number");
	scanf("%d",&num);
	printf("enter the digit");
	scanf("%d",&dig);

	while(num!=0)
	{
		idig=num%10;
		if(idig==dig){
			flag=1;
			break;
		}
		num=num/10;
	}
	if(flag==1){printf("True");}
	else{
	printf("false");
	}
	return 0;
}
