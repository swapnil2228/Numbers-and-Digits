//Write a program to print 1 to 100 without Loop
#include<stdio.h>
void number(int no){
	if(no<=100){
		printf("%d	",no);
		number(no+1);
	}
	
	
}
int main(){
	int num=1;
	number(num);
	return 0;

}
