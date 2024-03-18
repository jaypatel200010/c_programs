//basics Q-23
#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	printf("before swap a=%d,b=%d\n",num1,num2);
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	printf("after swap a=%d,b=%d",num1,num2);
}
