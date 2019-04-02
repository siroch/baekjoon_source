#include <stdio.h>

int main(){
	int length;
	scanf("%d",&length);
	
	for(int i=0; i<length; i++){
		for(int j=0; j<length-i-1; j++){
			printf(" ");
		}
		for(int k=0; k<1+i*2; k++){
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}