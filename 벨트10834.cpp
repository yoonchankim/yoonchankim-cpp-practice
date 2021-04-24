#include <stdio.h>
int main(){
    int p;
    int dir=0;
    int sum=1;
    scanf("%d",&p);
    for(int i=0;i<p;i++){
      int x,y,z;
      scanf("%d %d %d",&x,&y,&z);
      sum=sum*y/x;
      if(z==1){
          dir=1-dir;
      }
    }
    printf("%d %d",dir,sum);
    return 0;
}
