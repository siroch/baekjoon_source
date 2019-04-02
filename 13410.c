#include <stdio.h>
#include<math.h>

int main(){
	int r,h;
	scanf("%d %d",&r,&h);
	int arr[7];
	int ans = 0;
	int ans2 = 0;
	int q;
	int count = 0;
	int x = 7;
	for(int i=1; i<=h; i++){
		ans = 0;
		count = 0;
		q = r*i;
		while(q>0){
			ans += (q%10)*pow(10,x);
			q /= 10;
			x--;
		}
		while(count != 1){
			if(ans%10==0){
				ans /= 10;
			}
			else{
				count = 1;
			}
		}
		if(ans2 < ans){ ans2 = ans; }
	}
	printf("%d\n",ans2);
	return 0;
}