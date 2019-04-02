#include<stdio.h>
#include <math.h> 
#include <stdlib.h>

int main(){
	int arr[8];
	for(int i=0; i<8; i++){
		scanf("%d",&arr[i]);
	}
	int count = 0;
	for(int j=0; j<7; j++){
		if(abs(arr[j]-arr[j+1])!=1){
			count = 1;
			break;
		}
	}
	if(count==0 && arr[0]==1){
		printf("%s\n", "ascending");
	}
	else if(count==0 && arr[0]==8){
		printf("%s\n", "descending");
	}
	else{
		printf("%s\n", "mixed");
	}
	return 0;
}