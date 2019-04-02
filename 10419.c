#include <stdio.h>

int main(){
	int T,count;
	scanf("%d",&T);
	int arr[T];
	int ans[T];
	for(int i=0; i<T; i++){ scanf("%d",&arr[i]); }
	for(int i=0; i<T; i++){
		count = 0;
		while(1){
			count++;
			if(arr[i]==count+(count*count)) { count++; break; }
			if(arr[i]<(count*count)+count){ break; }
		}
		ans[i] = count-1;
	}
	for(int i=0; i<T; i++){ printf("%d\n",ans[i]); }
	return 0;
}