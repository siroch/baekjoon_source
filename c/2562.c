#include <stdio.h>

int main(){
	int arr[9];
	for(int i=0; i<9; i++){
		scanf("%d",&arr[i]);
	}
	int max = 0;
	int count = 0;
	int realcount = 0;
	for(int j=0; j<9; j++){
		count++;
		if(arr[j]>max){ max = arr[j]; realcount = count;}
	}
	printf("%d\n",max);
	printf("%d\n",realcount);
	return 0;
}