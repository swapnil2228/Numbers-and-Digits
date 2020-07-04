/*//write a program to print perfect numbers in given rangeOB
//INPUT: 1 10
//OUTPUT:6 is Perfect Number.*/


#include<stdio.h>
void printper(int lower,int upper);
int isperfect(int no);
int main(){
	int upper=0,lower=0,sum=0,i=0;
	printf("enter upper limit");
	scanf("%d",&upper);
	printf("enter lower limit: ");
	scanf("%d",&lower);
	printper(lower,upper);
	return 0;
}
void printper(int lower,int upper){
	while(lower<=upper){
		if(isperfect(lower))
			printf("%d is perfect no\n",lower);
		lower++;
	}
}
int isperfect(int no){
	int i=0,sum=0;
	for(i=1;i<=no/2;i++){
		if(no%i==0)
			sum+=i;
	}
	if(no==sum)
		return 1;
	return 0;
}
