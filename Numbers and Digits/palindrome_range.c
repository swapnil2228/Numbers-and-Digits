//Write a program which accepts range from user and print palindrome numbers in range.

#include<stdio.h>
void printPalindrome(int start,int end);
int checkPalindrome(int no);
int main(){
	int start,end;
	printf("enter the starting  number:");
	scanf("%d",&start);
	printf("enter the ending number of the searies:");
	scanf("%d",&end);
	printf("\n---------------------------\n");
	printf("\n the palindrome number between the %d and %d are\n",start,end);
	printPalindrome(start,end);
	return 0;
}
int checkPalindrome(int no){
	int temp,rem,rev=0,pal;
	temp=no;
	while(temp!=0){
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(rev==no){
	return 1;//palindrome number return 
	}
	return 0;

}
void printPalindrome(int start,int end){
	while(start<=end){
		if(checkPalindrome(start)){
			printf("%d\n",start);
		}
		start++;
	}
}
