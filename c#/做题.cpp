#include<bits/stdc++.h>
using namespace std;
typedef  long long LL;
int main(){
   LL a,b,n;
   cin>>a>>b>>n;
   LL z=5*a+2*b;
   LL res=n/z*7;
   n%=z;
   LL c[]={a,a,a,a,a,b,b};
   for(int i=0;n>0;i++){
    n-=c[i];
    res+=1;
   }
   cout<<res<<endl;
   return 0;
}