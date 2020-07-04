//write a program to find opwer of given number.
//INPUT:2 4
//OUTPUT: 16
#include<stdio.h>
#include<math.h>
void cal(int base,int power);
int main(){

	int base,power,i,ans=1;
	printf("enter base:");
	scanf("%d",&base);
	printf("enter power:");
	scanf("%d",&power);
	i=power;
	while(i!=0){
		ans=ans*base;
		i--;
	}
	printf("Answer is:%d",ans);
	printf("\n---------------------------\n");
	cal(base,power);	
	return 0;
}
void cal(int base,int power){
	int result=1;
	result=pow(base,power);
	printf("Answer is :%d",result);
}
