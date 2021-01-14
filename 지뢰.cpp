#include <stdio.h>
int main(){
    int m,n;
    int p;
    int locate[100][2];
    int ground[102][102]={0,};
    scanf("%d %d",&m,&n);
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d %d",&locate[i][0],&locate[i][1]);
        ground[locate[i][0]][locate[i][1]]=-1;
    }
    for(int i=0;i<p;i++){
        ground[locate[i][0]-1][locate[i][1]-1]++;
        ground[locate[i][0]-1][locate[i][1]]++;
        ground[locate[i][0]-1][locate[i][1]+1]++;
        ground[locate[i][0]][locate[i][1]-1]++;
        ground[locate[i][0]][locate[i][1]+1]++;
        ground[locate[i][0]+1][locate[i][1]+1]++;
        ground[locate[i][0]+1][locate[i][1]-1]++;
        ground[locate[i][0]+1][locate[i][1]]++;
    }
    for(int i=0;i<p;i++){
            ground[locate[i][0]][locate[i][1]]=-1;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            printf("%d ",ground[j][i]);
        }
        printf("\n");
    }
}
