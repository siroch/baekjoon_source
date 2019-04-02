#include <stdio.h>

int main(){
	int N,v;
	scanf("%d",&N);
	int arr[N];
	int count = 0;
	for(int i=0; i<N; i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&v);
	for(int i=0; i<N; i++){
		if(v==arr[i]){ count++; }
	}
	printf("%d\n",count);
	return 0;
}