#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int max=-1000000,min=1000000;
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}

	printf("%d %d\n",min,max);
	return 0;
}