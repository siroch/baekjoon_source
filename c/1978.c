#include<stdio.h>

int main(){
	int N = 0, check = 0, count = 0;
	scanf("%d",&N);
	int arr[N];
	for(int i=0; i<N; i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0; i<N; i++){
		check = 0;
		for(int j=2; j<arr[i]; j++){
			if(arr[i]%j==0){
				check = 1;
				break;
			}
		}
		if(check==0){
			count++;
			if(arr[i]==1){
				count--;
			}
		}
	}

	printf("%d\n",count);

	return 0;
}