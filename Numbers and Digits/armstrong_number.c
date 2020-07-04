//Accept one integer and check whether that number is Armstrong or not.
  // eg:153 is Armstrong number.
   //Armstrong number is number which is equal to the sum of the cube of its digit.
 #include<math.h> 
#include<stdio.h>
void chk_armstrong(int no);
int main(){
	int no;
	printf("enter the number:");
	scanf("%d",&no);
	chk_armstrong(no);
	return 0;
}
void chk_armstrong(int no){
	int num=0,temp=0,digit=0,sum=0;
	temp=no;
	while(temp!=0){
		sum=sum+pow(temp%10,3);
		temp=temp/10;
	}
	(no==sum)?printf("Armstrong number"):printf("Not ArmStrong NumBer");
}
