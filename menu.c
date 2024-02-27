#include<stdio.h>
int main(){
	int menu,quantity,amount;
	printf("1)pizza - 500rs\n2)burger - 50rs\n3)frankie - 150rs\n4)sandwich - 100rs\nchoose the food from the menu: ");
	scanf("%d",&menu);
	switch(menu)
	{
		case 1:
			printf("you have selected pizza\n");
			printf("select quantity: ");
			scanf("%d",&quantity);
			amount = quantity*500;
			printf("total amount is :%drs",amount);
			break;
			
		case 2:
			printf("you have selected burger\n");
			printf("select quantity: ");
			scanf("%d",&quantity);
			amount = quantity*50;
			printf("total amount is :%drs",amount);
			break;
		case 3:
			printf("you have selected frankie\n");
			printf("select quantity: ");
			scanf("%d",&quantity);
			amount = quantity*150;
			printf("total amount is :%drs",amount);
			break;		
		case 4:
			printf("you have selected sandwich\n");
			printf("select quantity: ");
			scanf("%d",&quantity);
			amount = quantity*100;
			printf("total amount is :%drs",amount);
			break;		
		default:
			printf("please enter correct choice");
	}
	return 0;
}
