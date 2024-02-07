#include<stdio.h>
int main(){
	int days;
	printf("enter number: ");
	scanf("%d",&days);
	
	switch(days){
		case 1:
			printf("monday");
			break;
			
		case 2:
			printf("Tuesday");
			break;
			
		case 3:
			printf("Wednesday");
			break;
			
		case 4:
			printf("Thursday");
			break;
			
		case 5:
			printf("Friday");
			break;
			
		case 6:
			printf("Saturday");
			break;
			
		case 7:
			printf("Sunday");
			break;
			
		default:
		printf("enter valid number");
		break;					
	}
	return 0;
}
