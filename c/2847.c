#include <stdio.h>

int main(){
	int N;
	int count = 0;
	scanf("%d",&N);
	int arr[N];
	for(int i=0; i<N; i++){
		scanf("%d",&arr[i]);
	}
	for(int i=N-2; i>-1; i--){
		while(arr[i]>=arr[i+1]){
			arr[i]--;
			count++;
		}
	}

	printf("%d\n",count);

	return 0;
}