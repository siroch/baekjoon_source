#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	for(int i=1; i<=x; i++){
		if(i%2==1){
			for(int j=0; j<x*2; j++){
				if(j%2==0){ printf("*"); }
				else{ printf(" "); }
			}
			printf("\n");
		}
		else{
			for(int j=0; j<x*2; j++){
				if(j%2==0){ printf(" "); }
				else{ printf("*"); }
			}
			printf("\n");
		}
	}

	return 0;
}