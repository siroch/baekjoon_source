#include <stdio.h>

int main(){
	int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int a,b;
	int n = 10;
	while(n>0){
		scanf("%d %d",&a,&b);
		int temp = 0;
		for(int i=0; i<(b-a+1)/2; i++){
			temp = arr[a+i-1];
			arr[a+i-1] = arr[b-i-1];
			arr[b-i-1] = temp;
		}
		n--;
	}
	for(int j=0; j<20; j++){
		printf("%d ",arr[j]);
	}
	return 0;
}