#include <cstdio>

int factorial(int n)
{
    if (n == 1)     
        return 1;    
    return n * factorial(n - 1);    
}

int main()
{
    int m,n,k;
    int cnt=0;
    int r,a;
    scanf("%d %d %d",&m,&n,&k);
    if(k!=0){
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cnt++;
                if(cnt==k){
                    r=i;
                    a=j;
                    printf("%d %d",r,a);
                }
            }
        }
        printf("%d",(factorial(r+a-2)/(factorial(r-1)*factorial(a-1)))*(factorial(m-r+n-a)/(factorial(m-r)*factorial(n-a))));
    }
    else{
        printf("%d",factorial(m+n-2)/(factorial(m-1)*factorial(n-1)));
    }
}