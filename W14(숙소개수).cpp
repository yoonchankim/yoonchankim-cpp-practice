#include <cstdio>
int main(){
    int p,k;
    int sum=0;
    int r[6][2]={0,};
    scanf("%d %d",&p,&k);
    for(int i=0;i<p;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        r[b-1][a]++;
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<6;j++){
            if(r[j][i]%k==0){
                sum=sum+(r[j][i]/k);
            }
            else{
                sum=sum+(r[j][i]/k+1);
            }
            
        }
    }
    printf("%d",sum);  
}