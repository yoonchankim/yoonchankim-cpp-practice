#include <stdio.h>
#include <math.h>
int main(){
    int p;
    int k=0;
    int min=0;
    int sum=0;
    int a[20000];
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<p;j++){
            sum=sum+abs(a[i]-a[j]);
        }
        if(i==0){
            min=sum;
        }
        if(sum<=min){
           k=i;
           min=sum;
        }
        sum=0;
    }
    printf("%d",a[k]);
}
