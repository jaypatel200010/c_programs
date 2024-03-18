// array Q-10.
#include<stdio.h>
int palindrome(int num){
		int orgnum=num;
		int revnum=0;
		
		for(;num>0;num/=10){
			int digit = num%10;
			revnum=revnum*10+digit;
		}
		return(orgnum == revnum);
	}
int main(){
	int number;
	printf("enter num :");
	scanf("%d",&number);
	if(palindrome(number)){
		printf("%d is a palin num",number);
	}
	else{
		printf("%d is not a palin num",number);
	}
}
