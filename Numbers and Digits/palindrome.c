#include<stdio.h>
void palindrome(int no);
int main(){
	int no;
	printf("enter the number");
	scanf("%d",&no);
	palindrome(no);
	return 0;
}
void palindrome(int no){
	int temp,rem,rev=0;
	temp=no;
	while(no!=0){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(temp==rev){
		printf("palindrome");
	}
	else
		printf("not palindrome");
}

