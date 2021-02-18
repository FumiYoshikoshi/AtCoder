//https://atcoder.jp/contests/dp/tasks/dp_j
#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
using Graph=vector<vector<int> >;
using p=pair<long,long>;
const int INF=1e9+7;

vector<vector<vector<double> > > dp;
int n;
vector<vector<vector<int> > > note;

double rec(int c1, int c2, int c3){
  if(note[c1][c2][c3]==1)return dp[c1][c2][c3];
  note[c1][c2][c3]=1;

  double prob = 1;
  int c0 = n- c1-c2-c3;
  // dish 0
  double prob0 = (double)c0/n;
  //prob += prob0;
  // dish 1 - 3
  if(c1>0)prob += ((double)c1/n) * rec(c1-1,c2,c3);
  if(c2>0)prob += (double)c2/n * rec(c1+1,c2-1,c3);
  if(c3>0)prob += (double)c3/n * rec(c1,c2+1,c3-1);
  dp[c1][c2][c3]=prob/(1-prob0);
  //cout<<c1<<c2<<c3<<prob<<endl;
  return dp[c1][c2][c3];
}

int main() {
  cin>>n;

  int c1 = 0;
  int c2 = 0;
  int c3 = 0;

  rep(i,n){
    int tmp;
    cin>>tmp;
    if(tmp==1)c1++;
    else if(tmp==2)c2++;
    else c3++;
  }

  dp = vector<vector<vector<double> > >(n+1, vector<vector<double> >(n+1, vector<double>(n+1, 1)));
  note = vector<vector<vector<int> > >(n+1, vector<vector<int> >(n+1, vector<int>(n+1, 0)));
  dp[0][0][0]=0;
  note[0][0][0]=1;

  
  double ans = rec(c1,c2,c3);
  
  cout<<setprecision(10)<<ans<<endl;
  return 0;
  
}

