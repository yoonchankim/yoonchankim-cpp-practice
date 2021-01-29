#include <cstdio>
int num[100000][2];
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d %d",&num[i][0],&num[i][1]);
    }
    for(int i=0;i<a;i++){
        printf("Case #%d: %d + %d = %d\n",i+1,num[i][0],num[i][1],num[i][0]+num[i][1]);
    }
}
