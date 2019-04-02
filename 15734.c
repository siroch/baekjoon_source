#include <stdio.h>

int main(){
	int L,R,A;
	scanf("%d %d %d",&L,&R,&A);
	if(L==R){ printf("%d\n",L+R+(A/2)*2); }
	else if (L>R+A){ printf("%d\n",(R+A)*2); }
	else if (R>L+A){ printf("%d\n",(L+A)*2); }
	else if (L>R && L<=R+A){ printf("%d\n", 2*L+((R+A-L)/2)*2); }
	else if (R>L && R<=L+A){ printf("%d\n", 2*R+((L+A-R)/2)*2); }
	return 0;
}