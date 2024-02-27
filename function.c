// Function: Function is block of code which we can use whenever we need it.
#include<stdio.h>
int main(){
// simple function without para and without argument.
//	int sum(){
//		printf("HII");
//	}
//	sum();
//----------------------------------------------------
// function with parameter without return.
//int a,b;
//int sum(a,b){
//	printf("%d",a+b);
//}
//sum(10,50);
//---------------------------------------------------
// function with para with return type
//int a,b;
//int sum(a,b){
//	return a+b;
//}
//printf("%d",sum(10,10));
//---------------------------------------------------
// function without para with return type
int sum(){
	int a=10,b=10;
	return a+b;
}
printf("%d",sum());
}
