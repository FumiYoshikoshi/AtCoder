// https://atcoder.jp/contests/abc194/tasks/abc194_d
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int n;

  cin>>n;

  double ans = 0;
  double k = (double)n-1;
  rep(i,n-1){
    ans += (double)n/k;
    k--;
  }

  
  
  
  cout<<fixed<<setprecision(10)<<ans<<endl;

  
  return 0;

  


}