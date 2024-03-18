//Array Q1
#include<stdio.h>
int Max(int arr[])
{
	int i,max=0,tem;
	for(i=0;i<5;i++){
		printf("%d\n",arr[i]);
		if(arr[i]>max){
			tem=arr[i];
			arr[i]=max;
			max=tem;
		}
	}
	printf("Max of given num is :%d ",max);
}
int main(){
	int arr[5];
	int i;
	for (i=0;i<5;i++){
		printf("Enter The Number : ");
		scanf("%d",&arr[i]);
	}
	Max(arr);
}
