#include <cstdio>
using namespace std;
int main(){
    //보드게임
    int p,h;
    int r=0;
    int num[48];
    char alpa[48];
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d %c",&num[i],&alpa[i]);
    }
    scanf("%d",&h);
    r=h+1;
    for(int j=0;j<p;j++){
        for(int i=0;i<p;i++){
            if(r==num[i]){
                if('A'<=alpa[i]&&alpa[i]<='Z'){
                    r=r+alpa[i]-64;
                    break;
                }
                else {
                    r=r+96-alpa[i];
                    break;
                }
            }
        }
    }
    if(r<1){
        printf("1");
    }
    else if(r>50){
        printf("50");
    }
    else{
        printf("%d",r);
    }
}

