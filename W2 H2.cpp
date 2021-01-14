#include <stdio.h>

int main(){
    int m,n,f;
    int d=0;//첫번째 소수가 언제인지 알려고 만들어논 변수,첫번째 소수에서 f=1이 돼면 다음 소수가 나올때 f=f+1돼 배열에 담는다
    int a[10001];//약수배열
    scanf("%d %d",&m,&n);
    for(int i=1;i<m+1;i++){
        if(d==0){
            if(m%i==0){
                d=d+1;
                f=1;
                a[f-1]=i;
            }
        }
        else if(m%i==0){
              f=f+1;
              a[f-1]=i;
        }
    }
    if(f>=n){
       printf("%d",a[n-1]);
    }
    else if(f<n){
        printf("0");
    }
}
