//write a program to print Fibonacci series. accept number of element in series from user.
//INPUT:6
//OuTPUT: 0 1 1 2 3 5

#include<stdio.h>
void printFib(int no);
int main(){
	int no;
	printf("enter the numeber\n");
	scanf("%d",&no);
	printf("fibbonaci searice of %d is:",no);
	printf("\n-----------------------------\n");
	printFib(no);
	return 0;
}
void printFib(int no){
	int firstNo=0,secNo=1,i,nextNo=0;
	for(int i=1;i<=no;i++){
		printf("%d\t",firstNo);
		nextNo=firstNo+secNo;
		firstNo=secNo;
		secNo=nextNo;
	}
}

