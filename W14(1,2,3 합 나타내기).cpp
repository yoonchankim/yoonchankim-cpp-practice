#include <cstdio>
int main(){
    int sum=0;
    int p;
    int g;
    scanf("%d",&g);
    int a[10000]={0,};
    a[1]=2;
    a[0]=1;
    a[2]=4;
    for(int k=0;k<g;k++){
        scanf("%d",&p);
        for(int i=4;i<=p;i++){
            for(int j=i-3;j<i;j++){
                sum=sum+a[j-1];
                if(j==i-1){
                    a[i-1]=sum;
                }
            }
            sum=0;
        }
        printf("%d",a[p-1]);
        sum=0;
    }
 
}
