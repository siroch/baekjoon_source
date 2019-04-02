#include<stdio.h>

int main(){
	int N;
	int idx = 0, count = 0, l = 666;
	scanf("%d",&N);
    while(N>0){
    	int k = l;
    	count = 0;
    	while(k > 0){
    		idx = k%10;
    		if(idx==6){
    			count++;
    		}
    		else{
    			count = 0;
    		}
    		if(count ==3){
    			break;
    		}
    		k /= 10;
    	}
    	if(count>=3){
    		N--;
    	}
    	l++;
    }

    printf("%d\n",l-1);

	return 0;
}