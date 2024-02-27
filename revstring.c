#include<stdio.h>
#include<string.h>
int main(){
	char a[13];
	printf("enter name: ");
	gets(a);
	printf("%s\n",a);
	strrev(a);
	printf("%s",a);
}
