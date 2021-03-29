#include <stdio.h>
int main(){
    int p;
    int k;
    int max=0;
    int max2=0;
    int r[1000]={0,};
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d %d %d %d %d",&r[0],&r[1],&r[2],&r[3],&r[4]);
        for(int x=0;x<3;x++)
        {
            for(int y=x+1;y<4;y++)
            {
                for(int z=y+1;z<5;z++)
                {
                    max=(r[x]+r[y]+r[z])%10;
                    if(max>=max2){
                        max2=max;
                        k=i;
                    }
                }
             }
        }
    }
    printf("%d",k+1);
}
