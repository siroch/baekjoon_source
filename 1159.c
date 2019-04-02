#include <stdio.h>

int main(){
	int m;
	scanf("%d",&m);
	char str[m][30];
	int arr[26] = {0,};
	int count = 0;
	int ans[26] = {0,};
	for(int i=0; i<m; i++){
		scanf("%s",&str[i][0]);
	}
	int j = 0;
	for(int i=0; i<m; i++){
		int k = (int)str[i][0] - 97;
		arr[k] += 1;
	}
	for(int i=0; i<26; i++){
		if(arr[i]>4){
			ans[count] = i+97;
			count++;
		}
	}
	if(count == 0){
		printf("PREDAJA\n");
	}
	else{
		int j = count;
		while(count>0){
			printf("%c",(char)ans[j-count]);
			count--;
		}
	}
	printf("\n");
	return 0;
}