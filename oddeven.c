#include<stdio.h>
int main(){
	int i,num,odd=0,even=0,sumeven=0,sumodd=0;
	for(i=0;i<10;i++){
		printf("enter num ");
		scanf("%d",&num);
		if(num % 2 ==0){
			even= even+1;
			sumeven=sumeven+num;
		}
		else{
			odd= odd+1;
			sumodd=sumodd+num;
		}
	}
	printf("total even num%d\n",even);
	printf("total odd num%d\n",odd);
	printf("total sumeven num%d\n",sumeven);
	printf("total sumodd num%d\n",sumodd);
}
