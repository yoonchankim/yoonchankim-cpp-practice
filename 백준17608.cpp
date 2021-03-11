#include <stdio.h>
    int num[100000];
int main(){
    int p;
    int x;
    int sum=1;
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d",&num[i]);
    }
    x=num[p-1];
    for(int i=p-1;i>=0;i--){
        if(x<num[i])
        {
            x=num[i];
            sum++;
        }
    }
    printf("%d",sum);
}