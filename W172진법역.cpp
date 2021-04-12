#include <cstdio>
#include <algorithm>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;
int main(){
   string a;
   cin>>a;
   int sum=0;
   int p=a.length();
   for(int i=0;i<p;i++){
       int sum2=1;
       for(int j=1;j<p-i;j++){
          sum2=2*sum2;
       }
       sum=sum+sum2*(a[i]-'0');
   }
   printf("%d",sum);
}
