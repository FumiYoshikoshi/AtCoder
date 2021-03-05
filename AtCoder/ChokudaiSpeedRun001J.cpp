// To be ameriolated
// https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_j?lang=en　　
#include <bits/stdc++.h>
#include <set>   
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int n;

  cin>>n;

  vector<int> a(n);
  vector<int> b(n,0);

  rep(i,n){
    cin>>a[i];
  }

  int left = 0;
  int ans = 0;

  auto sum = [&](int j){
    int s = 0;
    rep(i,j){
      s += b[i];
    }
    return s;
  };

  rep(i,n){
    //b[a[i]-1]+=1;
    //ans += i-sum(a[i]-1);
  \
   if((a[i]-1)<i)left += 1;
    cout<<"i "<<i<<" left "<<left<<endl;
    ans += (i-left);
    b[a[i]-1]+=1;
    if(b[i]==1)left += 1;
    cout<<ans<<endl;
  }

  
  
  cout<<ans<<endl;

  return 0;

  


}