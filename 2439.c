#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	int w = x;
	while(x>0){
		for(int i=0; i<x-1; i++){
			printf(" ");
		}
		for (int j=0; j<w-x+1; j++)
		{
			printf("*");
		}
		printf("\n");
		x--;
	}
	return 0;
}