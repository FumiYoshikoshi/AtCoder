//https://atcoder.jp/contests/typical90/tasks/typical90_n

#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,s,n)for(int i=s;i<(int)(n);i++)
using namespace std;
using Graph=vector<vector<int> >;
using p=pair<long,long>;
const int64_t mod = 1000000007;


int main() {
  int n;
  cin>>n;
  vector<int> a(n,0);
  vector<int> b(n,0);

  rep(i,0,n){
    cin>>a[i];
  }

  rep(i,0,n){
    cin>>b[i];
  }

  sort (a.begin(), a.end());     
  sort (b.begin(), b.end());    

  long long ans = 0;

  rep(i,0,n){
    ans += abs(a[i]-b[i]);
  } 

  cout<<ans;
  return 0;
}

