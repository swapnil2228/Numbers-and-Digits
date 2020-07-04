#include<stdio.h>
int rev(int no);
int main(){
	int no,ans;
	printf("enter the number:");
	scanf("%d",&no);
	rev(no);
	return 0;
}
int rev(int no){
	int num;
	if(no==0){
		return 0;
	}
	num=no%10;
	printf("%d",num);
	return rev(no/10);
}
