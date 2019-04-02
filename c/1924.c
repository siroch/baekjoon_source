#include<stdio.h>

int main(){
	int x, y;
	scanf("%d %d",&x,&y);
	int arr[365];
	int m = 1;
	int d = 1;
	int count = 1;
	int check = 0;
	for(int i=1; i<366; i++){
		arr[i-1] = m*1000+d;
		d++;
		if(i==31 || i==59 || i==90 || i==120 || i==151 || i==181 || i==212 || i==243 || i==273 || i==304 || i==334 || i==365){
			d = 1;
			m++;
		}
	}

	for(int i=0; i<365; i++){
		if(arr[i] == x*1000+y){
			check = count%7;
			break;
		}
		count++;
	}
	switch(check){
		case 0:
			printf("%s\n","SUN");
			break;
		case 1:
			printf("%s\n","MON");
			break;
		case 2:
			printf("%s\n","TUE");
			break;
		case 3:
			printf("%s\n","WED");
			break;
		case 4:
			printf("%s\n","THU");
			break;
		case 5:
			printf("%s\n","FRI");
			break;
		case 6:
			printf("%s\n","SAT");
			break;
	}

	return 0;
}