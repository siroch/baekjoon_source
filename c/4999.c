#include <stdio.h>

int main(){
	char arr1[1000];
	char arr2[1000];
	scanf("%s",arr1);
	scanf("%s",arr2);
	int count1=0, count2=0;
	while(arr1[count1]!=0){
		count1++;
	}
	while(arr2[count2]!=0){
		count2++;
	}
	printf("%s\n",count1>=count2?"go":"no");
	return 0;
}