#include<stdio.h>
int main(){
	// swaping numbers
	int a=10,b=20;
	//without using 3rd var
	printf("before swap %d%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap %d%d",a,b);
	//using 3rd var
//	printf("before swap %d%d",a,b);
//	c=a;
//	a=b;
//	b=c;
//	printf("after swap %d%d",a,b);
}
