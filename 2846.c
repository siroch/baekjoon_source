#include<stdio.h>

int main(){
	int N = 0;
	int check = 0;
	scanf("%d",&N);
	int start = 0, end = 0, ans = 0;//시작 끝 가장 큰 값
	int arr[N]; 
	for(int i=0; i<N; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int j=0; j<N; j++){
		if(arr[j]<arr[j+1]){
			start = arr[j];
			for(int k=j; k<N; k++){
				if(arr[k]<arr[k+1]){
					check = 1;
				}
				else{
					check = 0;
				}
				if(check==0){
					end = arr[k];
					if((end - start)>ans){
						ans = end - start;
					}
					start = end = 0;
					break;
				}
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
