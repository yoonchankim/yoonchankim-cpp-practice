
#include <stdio.h>
int main(){
    int p;
    int a1=0;
    int a2=0;
    int a3=0;
    int a4=0;
    int r[100][4];
    int a[1001][1001]={0,};
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d %d %d %d",&r[i][0],&r[i][1],&r[i][2],&r[i][3]);
        for(int j=r[i][0];j<r[i][0]+r[i][2]+1;j++){
            for(int k=r[i][1];k<r[i][1]+r[i][3]+1;k++){
                a[j][k]=i+1;
            }
        }
    }
    for(int i=0;i<1001;i++){
         for(int j=0;j<1001;j++){
             if(a[i][j]==1){
                 a1++;
             }
             else if(a[i][j]==2){
                 a2++;
             }
            else if(a[i][j]==3){
                 a3++;
             }
            else if(a[i][j]==4){
                 a4++;
             }
        }
    }
    printf("%d\n%d\n%d\n%d\n",a1,a2,a3,a4);
    return 0;
}
