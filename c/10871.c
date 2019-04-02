#include <stdio.h>

int main(){
	int n,x;
	scanf("%d %d",&n,&x);
	int arr[n];
	int ans[n];
	int count = 0;
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++){
		if(arr[i]<x){ ans[count] = arr[i]; count++; }
	}
	for(int i=0; i<count; i++){
		printf("%d ",ans[i]);
	}
	printf("\n");
	return 0;
}