//https://atcoder.jp/contests/typical90/tasks/typical90_c
//https://github.com/fumiysks/kyopro_educational_90/blob/main/sol/003.cpp

#include <bits/stdc++.h>
#include <algorithm>
#include <queue>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
#define rep_1(i,n)for(int i=1;i<(int)(n);i++)
using namespace std;
using Graph=vector<vector<int> >;
using p=pair<long,long>;
const int INF = (1 << 29);
const int64_t mod = 1000000007;

int n;
vector<vector<int>> g;
vector<int> d;

void dist(int s){
  queue<int> que;
  que.push(s); 
  d = vector<int>(n,INF); 
  d[s]=0;
  while(!que.empty()){
    int node = que.front();
    que.pop();
    for(int dist:g[node]){
      if(d[dist]==INF){
        d[dist]=d[node]+1;
        que.push(dist);
      }
    }
  }
}



int main() {
  cin>>n;
  int a=0;
  int b=0;
  g = vector<vector <int> >(n,vector<int>());
  rep(i,n-1){
    cin>>a>>b;
    g[a-1].push_back(b-1);
    g[b-1].push_back(a-1);
  }

  dist(0);
  int _max = -1;
  int maxid = -1;

  rep(i,n){
    if(_max<d[i]){
       _max = d[i];
       maxid = i;
    }
  }

  _max = -1;
  dist(maxid);

  rep(i,n){
    _max = max(_max,d[i]);
  }
  cout<<_max+1<<endl;

  return 0;

}

