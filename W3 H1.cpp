#include <stdio.h>
int main(){
    //전화번호
    int cnt=0;
    int ncnt[10];
    int num;
    int m;
    int max=0;
    for(int j=0;j<10;j++){
        ncnt[j]=0;
    }
    scanf("%d",&num);
    for(int i=0;i<8;i++){
       ncnt[num%10]=ncnt[num%10]+1;
       num=num/10;
    }
    m=ncnt[6]+ncnt[9];
    if((ncnt[6]+ncnt[9])%2==0){
        ncnt[6]=m/2;
        ncnt[9]=m/2;
    }
    else if((ncnt[6]+ncnt[9])%2==1){
        ncnt[6]=m/2;
        ncnt[9]=ncnt[6]+1;
    }
    for(int k=0;k<10;k++){
        if(max<ncnt[k]){
            max=ncnt[k];
        }
    }
    printf("%d",max);
}
