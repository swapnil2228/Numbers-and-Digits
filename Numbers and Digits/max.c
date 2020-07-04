//write a program which accept N Numbers from user and print maximum from that numbers.
//INPUT:4 7 2 1 5 3 8
//OUTPUT: 8
#include<stdio.h>
int main(){
	int n,m,i,max;
	printf("how many numbers...");
	scanf("%d",&n);
	printf("enter numbers");
	scanf("%d",&m);
	max=m;
	for(i=2;i<=n;i++){
		scanf("%d",&m);
		if(m>max){
			max=m;
		}
	}
	printf("maximum is=%d",max);
	return 0;
}
