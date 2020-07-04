//write a program which accept N and print first 5 multiples of N.
//INPUT: 4
//OUTPUT: 4 8 12 16 20
#include<stdio.h>
int main(){
	void mult(int no);
	int no;
	printf("enter the number....");
	scanf("%d",&no);
	mult(no);
	return 0;
}
void mult(int no){
	int i;
	for(i=1;i<=5;i++){
		printf("%d\t",(no*i));
	}
}
