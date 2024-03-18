//armstrong number
#include<stdio.h>
int main(){
	int num,tem,a,sum;
	printf("enter the num :");
	scanf("%d",&num);
	tem=num;
	for(;num > 0;){
		a=num%10;
		sum=sum+(a*a*a);
		num=num/10;
	}
	if(tem==sum){
		printf("num is armstrong num");
	}
	else{
		printf("num is not armstrong num");
	}
}
