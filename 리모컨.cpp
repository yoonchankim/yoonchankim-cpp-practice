#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
bool broken[10];
int main() {
    int a[6];
    int r=0;
    int n,m,k;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int z;
        cin >> z;
        broken[z] = true;
    }
    k=n;
    int j=0;
    while(k==0){
        a[j]=k%10;
        k=k/10;
        j++;
    }
    reverse(a, a+j);
    for(int i=0;i<j;i++){
        if(broken[a[i]]==false){
            r++;
        }
        else{
            int f;
            for(int c=a[i]-1;c>=0;c--){
                if(broken[c]==false){
                    f=c;
                    break;
                }
            }
            int h;
            for(int v=9;v>a[i];v--){
                if(broken[v]==false){
                    h=v;
                    break;
                }
            }
            int l;
            l=min(abs(f-a[i]),abs(h-a[i]));
            r=r+1+l;
        }
    }
    printf("%d",r);
    return 0;
}
