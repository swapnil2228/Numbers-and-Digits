//write a program which accept N Numbers from user and print maximum from that numbers.
//INPUT:4 7 2 1 5 3 8
//OUTPUT: 8
#include<stdio.h>
int main(){
	int max_num(int a[],int n);
	int i,n,max;
	int a[50];
	printf("how many numbers you want....");
	scanf("%d",&n);
	printf("enter the numbers......");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=max_num(a,n);
	printf("maximum is \t%d",max);
	return 0;
}
int max_num(int a[],int n){
	int i,m=0;
	for(i=0;i<n;i++){
		if(m<a[i]){
			m=a[i];
		}
	}
	return m;
}
