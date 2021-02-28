// https://atcoder.jp/contests/dp/tasks/dp_k?lang=en
#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int n,k;

  cin>>n>>k;
  vector<int> a = vector<int>(n);

  
  rep(i,n){
    cin>>a[i];
  }

  vector<int> dp = vector<int>(k+1,1);

  
  for(int i = 1; i<=k; i++){
      rep(j,n){
          if(i-a[j]>=0 && dp[i-a[j]]==1){
              dp[i]=0;
              break;
          }
      }
  }
  //rep(i,k+1){
    //cout<<dp[i];
  //}

  if(dp[k]==0)cout<<"First"<<endl;
  else cout<<"Second"<<endl;
  
  

  
  return 0;

  


}