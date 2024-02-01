#include<stdio.h>
int main(){
	int a;
	printf("please select the valu of a: ");
	scanf("%d",&a);
	if(a>=18){
		if(a>18){
			printf("dl eligible");
		}
		else{
			printf("ll eligible");
		}

	}
	else{
		printf("not valid");
	}
}
