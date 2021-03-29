#include <stdio.h>
int main(){
    int a=300;
    int b=60;
    int c=10;
    int p;
    int r;
    int k[3]={0,};
    scanf("%d",&p);
    k[0]=p%a;
    k[1]=k[0]%b;
    k[2]=k[1]%c;
    if(k[2]!=0){
        printf("-1");
    }
    else{
        printf("%d %d %d",p/a,(p%a)/b,((p%a)%b)/c);
    }
}