#include <stdio.h>

int main(){
	int n,m,tm;
	scanf("%d %d",&n,&m);
	int arr[n];
	int trueman[n];
	for(int i=0; i<n; i++){ arr[i] = i+1; }
	scanf("%d",&tm);
	for(int i=0; i<tm; i++){ scanf("%d",trueman[i]); }
	//아직 못품
	return 0;
}