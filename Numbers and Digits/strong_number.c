//accept one number and check whether that number is strong number or not.	
  // Strong number : special number whose sum of factorial of digits is equal
//	to the original number. 
//	For example: 145 is strong number. 
//Since, 1! + 4! + 5! = 145
#include<stdio.h>
void strong(int no);
int main(){
	int no;
	printf("enter the number:");
	scanf("%d",&no);
	strong(no);
	return 0;
}
void strong(int no){
	int digit=0,temp=0,fact=1,sum=0;
	temp=no;
	while(temp!=0){
		digit=temp%10;
		temp=temp/10;

		while(digit!=0){
			fact=fact*digit;
			digit--;
			//printf("\n%d\n",digit);
		}
		sum=sum+fact;
		fact=1;
	}
	(sum==no)?printf("strong number"):printf("not strong number");
	
}
