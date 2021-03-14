// https://atcoder.jp/contests/abc195/tasks/abc195_b?lang=en
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=1;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  double a;double b;double w;

  cin>>a>>b>>w;
  w *= 1000;

  int m = 1000*1000*1000;
  int M = 0;

  rep(i,1000*1000+1){
    if(a*i <= w && w <= b*i){
      m = min(m,i);
      M = max(M,i);
    }
  }


  if(m>M){
    cout<<"UNSATISFIABLE"<<endl;
  }else cout<<m<<" "<<M<<endl;


  
  return 0;

  


}