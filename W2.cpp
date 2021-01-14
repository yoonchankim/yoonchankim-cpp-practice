#include <stdio.h>

int main()
{
    int a[11];
    int a[11];
    int cnt=0;
    scanf("%d %d",&n,&m);
    for(int i=n;i<m+1;i++)
    {
        for(int j=2;j<i;j++){
            if(i%j==0){
                cnt++;
            }
        }
        if(cnt==0){
            rcnt++;
        }
        cnt=0;
    }
    printf("%d",rcnt);
}
