#include <cstdio>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main(){
    int p;
    int min;
    int x,y;
    int k=0;
    int s[100000];
    int u[100000];
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        int a;
        scanf("%d",&a);
        if(a<0){
            s[i]=a;
            k++;
        }
        else{
            u[i-k]=a;
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<p-k;j++){
            if(j==0&&i==0){
                min=abs(s[i]+u[j]);
            }
            else if(min>abs(s[i]+u[j])){
                printf("%d\n",min);
                x=s[i];
                y=u[j];
            }
        }
    }
    printf("%d %d",x,y);
}