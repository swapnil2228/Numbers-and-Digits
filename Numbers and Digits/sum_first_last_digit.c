//Write a progam to sum first and last digit of number

#include<stdio.h>
void digitsum(int no);
int main(){
	int no,chk;
	printf("enter numeber");
	scanf("%d",&no);
	digitsum(no);
	//printf("%d",chk);
	return 0;
}
void digitsum(int no){
	int digit=0,rem=0,temp=0,sum=0,first=0;
	temp=no;
	//last digit
	rem=temp%10;
	//first digit
	while(temp!=0){
		first=temp%10;
		temp/=10;

	}
	sum=rem+first;
	printf("\n%d\n",sum);
}
