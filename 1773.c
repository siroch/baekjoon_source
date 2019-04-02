#include <stdio.h>

int main(){
	int N,C;
	scanf("%d %d",&N,&C);
	int arr[N];
	int ar[C];
	int ans = 0;
	for(int i=0; i<C; i++){ ar[i]=0; }
	for(int i=0; i<N; i++){ scanf("%d",&arr[i]); }

	for(int i=0; i<N; i++){
		if(arr[i]==1){ ans = C; break; }
		int w = C/arr[i];
		int count = 1;
		while(w>0){
			if(ar[arr[i]*count-1] != 1){ ar[arr[i]*count-1] = 1; ans++; }
			w--;
			count++;
		}
	}
	printf("%d\n",ans);
	return 0;
}