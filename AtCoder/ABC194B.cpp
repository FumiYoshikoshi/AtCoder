// https://atcoder.jp/contests/abc194/tasks/abc194_b?lang=en
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int n;

  cin>>n;
  vector<int> a(n);
  vector<int> b(n);

  
  rep(i,n){
    cin>>a[i]>>b[i];
  }

  int min = mod;

  rep(i,n){
    rep(j,n){
      int tmp = 0;
      if(i==j)tmp = a[i]+b[j];
      else tmp=max(a[i],b[j]);
      
      if(min>tmp)min=tmp;
    }
  }
  
  
  cout<<min<<endl;

  
  return 0;

  


}