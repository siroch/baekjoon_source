#include <stdio.h>

int main(){
	char a[10001];
    char b[10001];
    long long cnt = 0;
    scanf("%s %s",a,b);
    int i,j, t = 0;
    for(i=0;b[i];i++)
        t += b[i]-'0';
    long long sol = 0;
    for(i=0;a[i];i++) {
        sol += (a[i]-'0') * t;
    }
    printf("%lld",sol);
	return 0;
}