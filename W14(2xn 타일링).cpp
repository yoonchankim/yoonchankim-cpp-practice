#include <cstdio>
int main(){
  int p;
  int sum=0;
  scanf("%d",&p);
  int i=0;
  while(2*i<=p){
      i=i+1;
      int pact=0;
      for(int j=1;j<=i;j++)
      {
        pact=pact*j;
      }
      int pact2=0;
      for(int k=p;k>=p-i+1;k--)
      {
        pact2=pact2*k;
      }
      sum=sum+(pact2/pact);
  }
  printf("%d",sum);
  return 0;
}
