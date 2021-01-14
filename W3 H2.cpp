#include <stdio.h>
int main(){
    //게임의 완성
   int p;
   int cnt=0;
   int num[101];
   scanf("%d",&p);
   for(int i=0;i<p;i++){
      scanf("%d",&num[i]);
   }
   for(int j=0;j<p-1;j++){
      if(num[p-1]-(p-1-j)<num[j]){
        cnt=cnt-(num[p-1]-p+1+j-num[j]);
      }
   }
   printf("%d",cnt);
}
