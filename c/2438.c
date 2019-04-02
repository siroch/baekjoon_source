#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	int w = x;
	while(x>0){
		for(int i=0; i<w-x+1; i++){
			printf("*");
		}
		printf("\n");
		x--;
	}
	return 0;
}