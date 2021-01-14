#include <stdio.h>
 int main(){
     //ÆÀ Á¤ÇÏ±â ¼÷Á¦ÀÔ´Ï´Ù
    int n,m;
    int number;
    scanf("%d %d",&n,&m);
    scanf("%d",&number);
     if((n/m)*m<number){
        printf("0");
     }
     else{
        printf("%d",number%m);
     }
 }
