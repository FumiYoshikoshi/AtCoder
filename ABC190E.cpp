// Still working
#include <bits/stdc++.h>
#include <set>   
#include <iostream>
#include <algorithm>
#include <cmath>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
const int64_t mod = 1000000007;

int main() {

  int n,m;

  cin>>n>>m;

  vector<vector<int> > gems(n);

  
  rep(i,m){
    int a,b;
    cin>>a>>b;
    gems[a-1].push_back(b-1);
    gems[b-1].push_back(a-1);
  }

  int k;

  cin>>k;
  vector<int> c(k);

  rep(i,k){
    int tmp;
    cin>>tmp;
    c.push_back(tmp-1);
  }

  auto bfs = [&] (int s){
    return 0;
  };

  vector<vector<int> > dp(n);

  
  
  
  cout<<" "<<endl;

  
  return 0;

  


}