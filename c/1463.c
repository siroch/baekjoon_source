#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){ arr[i]=0; }
    int r = 0;
    if(n<2){ printf("%d\n",0); }
    for(int i=2; i<n+1; i++){
        r = 1+arr[i-1];
        if(i%2 == 0){ r = r > 1+arr[i/2] ? 1+arr[i/2] : r; }
        if(i%3 == 0){ r = r > 1+arr[i/3] ? 1+arr[i/3] : r; }
        arr[i] = r;
    }
    printf("%d\n",arr[n]);
    return 0;
}