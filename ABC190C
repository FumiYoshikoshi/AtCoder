//ABC190-C Out-of-time 
#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int n,m;

  cin>>n>>m;

  vector<pair<int,int> > cond(m);
  rep(i,m){
    pair<int,int> p;
    cin>>p.first>>p.second;
    cond[i]=p;
  }

  int k;
  cin>>k;
  vector<pair<int,int> > choice(k);
  rep(i,k){
    pair<int,int> p;
    cin>>p.first>>p.second;
    choice[i]=p;
  }
  
  int ans = 0;

  for (int bit = 0; bit < (1<<k); bit++){
    vector<bool> isBall(n);
    rep(i,k){
        if(bit & 1<<i)isBall[choice[i].first]=true;
        else isBall[choice[i].second]=true;
    }

    int match = 0;
    rep(i,m)if(isBall[cond[i].first] && isBall[cond[i].second])match+=1;
    ans = max(ans,match);
  }
  
  cout<<ans<<endl;

  
  return 0;

  


}
