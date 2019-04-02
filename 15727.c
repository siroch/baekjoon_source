#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	printf("%d\n",N%5!=0 ? N/5+1 : N/5);
	return 0;
}