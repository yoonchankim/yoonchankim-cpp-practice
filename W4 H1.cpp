#include <stdio.h>
int guldthgab(int x);
int main()
{
    //색종이
    int p, cnt = 0;
    int m,n;
    int coordinate[101][101]={0,};
    scanf("%d", &p);
    for (int i = 0; i < p; i++){
       scanf("%d %d",&m,&n);
       for(int j=0;j<10;j++){
           for(int k=0;k<10;k++){
            coordinate[m+j][n+k]=1;
           }
       }
    }
     for(int j=0;j<101;j++){
           for(int k=0;k<101;k++){
               if(coordinate[j][k]==1){
                   cnt=cnt+1;
               }
           }
    }
    printf("%d",cnt);
}

