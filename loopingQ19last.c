//loopingQ19 last pattern
#include<stdio.h>
int main(){
	int i,j,num;
	for (i=0;i<=4;i++){
		for(j=0;j<10;j++){
			printf("%02d ",++num);
		}
		printf("\n");
	}
}
