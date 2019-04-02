#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	while(x>0){
		for(int i=x; i>0; i--){
			printf("*");
		}
		printf("\n");
		x--;
	}
	
	return 0;
}