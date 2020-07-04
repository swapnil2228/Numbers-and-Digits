// write a progam which accept one number and print only prime factors.
 //  input: 6
  // output:2,3
 

#include<stdio.h>
void print_prime_factors(int no){
	int i=0,isPrime=0,j=0;
	for(i=2;i<=no/2;i++){
		if(no%i==0){
			isPrime=1;
			for(j=2;j<i;j++){
				if(i%j==0){
					isPrime=0;
					break;
				}
			}
			if(isPrime==1){
				printf("%d	",i);
			}
		}
	}
	if(j==0){
		printf("%d\n",no);
		printf("number is prime itself\n");
	}
}
int main(){
	int no;
	printf("enter the number:");
	scanf("%d",&no);
	print_prime_factors(no);
	return 0;
}
