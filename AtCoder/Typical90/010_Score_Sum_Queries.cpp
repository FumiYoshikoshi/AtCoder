//https://atcoder.jp/contests/typical90/tasks/typical90_j

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

  vector<int> acc_score1(n+1,0);
  vector<int> acc_score2(n+1,0);

  rep(i,0,n){
    int c; int score;
    cin>>c>>score;
    if(c==1){
      acc_score1[i+1] = acc_score1[i]+ score;
      acc_score2[i+1] = acc_score2[i];
    }else{
      acc_score2[i+1] = acc_score2[i]+ score;
      acc_score1[i+1] = acc_score1[i];
    }
  }
  
  int q;
  cin>>q;

  rep(i,0,q){
    int start; int end;
    cin>>start>>end;
    int ans1 = acc_score1[end] - acc_score1[start-1];
    int ans2 = acc_score2[end] - acc_score2[start-1];
    cout<<ans1<<" "<<ans2<<endl;

  }

  return 0;
}

