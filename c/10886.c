#include<stdio.h>

int main(){
   int n, i;
   int count=0;
   scanf("%d",&n);
   int arr;
   
   for(i=0; i<n; i++){
      scanf("%d",&arr);
      if(arr==1){
         count++;
      }
      printf("%d %d\n",arr,count );
   }
   
   if(count>n%2){
      printf("Junhee is cute!\n");
   }
   else{
      printf("Junhee is not cute!\n");
   }
   
   return 0;

}