#include<stdio.h>
int main(){
	int i,j,k;
		for(i=0; i<=5; i++){
		for(j=0; j<=5-i; j++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=1; i<=5; i++){
		for(j=0; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
}
