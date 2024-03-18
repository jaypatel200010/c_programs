// 1+2+3+4+5+...+n looping

#include<stdio.h>
int main(){
	//int i,j,num,sum=0;
	double i,sum;
	int num;
	printf("enter the num ");
	scanf("%d",&num);
	for (i=0;i<=num;i++){
		//sum+=i; Q-24
		//sum+=i*i; Q-25
//		for(j=0;j<=i;j++){
//			sum+=j;//Q-26
//		}
// for Q-27
		if((int)i%2==1){
			sum+=i/(i+1);
		}
		else{
			sum-=i/(i+1);
		}
	}
	printf("sum :%lf",sum);
}
