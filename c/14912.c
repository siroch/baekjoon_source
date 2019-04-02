#include<stdio.h>

int main(){
    int arr[10] ={0,};
    int a, b;
    int index = 0;
    scanf("%d %d", &a, &b); 
    for(int i=1 ; i<a+1; i++){
        int k = i;
        while(k > 0){
            index = k%10;
            arr[index] += 1;
            k = k/10;
        }
    }

    printf("%d\n",arr[b]);
    
    return 0;
}


