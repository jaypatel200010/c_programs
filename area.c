#include<stdio.h>
int main(){
	char a[15],c[15];
	double b;
	printf("enter your name: ");
	scanf("%s",&a);
	printf("name is: %s\n",a);
	printf("enter your add: ");
	scanf("%s",&c);
	printf("add is: %s\n",c);
	printf("enter your mobile: ");
	scanf("%lf",&b);
	printf("mo is: %.0lf",b);
}
