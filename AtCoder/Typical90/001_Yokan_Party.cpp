//https://atcoder.jp/contests/typical90/tasks/typical90_a

#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n)for(long long i=0;i<n;i++)
#define rep_1(i,n)for(long long i=1;i<n;i++)
using namespace std;
using Graph=vector<vector<int> >;
using p=pair<long,long>;
const int64_t mod = 1000000007;

long long n,l,k;
vector<long long > a;

bool check(int m){
  long long  pre =0;
  long long  count=0;
  rep_1(i,n+1){
    if(a[i]-pre>=m && l-a[i]>=m){
      pre=a[i];
      count+=1;
    }
  }
  return (count>=k);
}

int main() {

  cin>>n>>l;
  cin>>k;
  a = vector<long long >(n+1,0);
  rep_1(i,n+1)cin>>a[i];

  long long  right = l+1;
  long long  left = -1;
  while(right-left>1){
    long long  m = left+(right-left)/2;
    if(!check(m))right = m;
    else left = m;
  }
  cout<<left<<endl;
  return 0;
}

