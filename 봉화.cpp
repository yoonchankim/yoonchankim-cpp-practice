#include <stdio.h>
int main(){
    int p;
    int cnt=0;
    int peak[100000];
    int rpeak[100000];
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d",&peak[i]);
        rpeak[i]=peak[i];
    }
    for(int i=p-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(peak[i]>=peak[j]){
                rpeak[j]=0;
            }
        }
    }
    for(int i=0;i<p;i++){
        if(rpeak[i]!=0){
            cnt++;
        }
    }
    printf("%d",cnt);
}
