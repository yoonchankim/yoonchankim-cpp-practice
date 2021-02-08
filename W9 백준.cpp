#include <stdio.h>
int main(){
        int num[100];
    int a,x;
    scanf("%d %d",&a,&x);
    for(int i=0;i<a;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<a;i++){
        if(num[i]>x){
            printf("%d ",num[i]);
        }
    }
}