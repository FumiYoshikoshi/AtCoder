//https://atcoder.jp/contests/typical90/tasks/typical90_d

#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
using Graph=vector<vector<int> >;
using p=pair<long,long>;
const int64_t mod = 1000000007;



int main() {

  int h,w;
  cin>>h>>w;
  int map[h][w];
  vector<int> row(h,0);
  vector<int> col(w,0);

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>map[i][j];
      row[i]+=map[i][j];
    }
  }

  for(int i=0;i<w;i++){
    for(int j=0;j<h;j++){
      col[i]+=map[j][i];
    }
  }
  
 
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      map[i][j]=row[i]+col[j]-map[i][j];
      cout<<map[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}

