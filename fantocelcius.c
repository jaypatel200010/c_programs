#include<stdio.h>
int main(){
	float fan,cal=0;
	printf("enter fan value :");
	scanf("%f",&fan);
	cal=0.55*(fan-32);
	printf("%f",cal);
}
