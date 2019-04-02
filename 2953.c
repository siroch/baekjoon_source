#include <stdio.h>

int main()
{
	int arr[5][4];
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int max = 0;
	int save = 0;
	int count = 0;
	for(int k=0; k<5; k++){
		count = 0;
		for(int w=0; w<4; w++){
			count += arr[k][w];
		}
		if(count>max){
			max = count;
			save = k+1;
		}
	}
	printf("%d %d\n",save,max);
	return 0;
}