#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
using Graph=vector<vector<int>>;
using p=pair<long,long>;
const int64_t mod = 1000000007;



int main() {

  int n;
  cin>>n;
  vector<int> a(n);
  vector<int> b(n);
 
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int64_t s1 = 0;
  int64_t s2 = 0;
  int64_t dif = 0;

  int64_t max = 0;

  int64_t max_move = 0;


  rep(i,n){
    s2 = s1 + dif + a[i];
    if(max_move < dif+a[i])max_move = dif+a[i];
    if(s1+max_move > max)max =s1+max_move ;
    dif = s2 - s1;
    s1 = s2;
  }

  cout<<max<<endl;
  return 0;
}

