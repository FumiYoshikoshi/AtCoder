//https://atcoder.jp/contests/typical90/tasks/typical90_g

#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
//#define rep(i,n)for(int i=0;i<(int)(n);i++)
#define rep(i,s,n)for(int i=s;i<(int)(n);i++)
using namespace std;
using Graph=vector<vector<int> >;
using p=pair<long,long>;
const long long mod = 1000000007;



int main() {
  int n;
  int q;

  cin>>n;
  vector<int> a(n,0);
  rep(i,0, n){
    cin>>a[i];
  }
  std::sort (a.begin(), a.end()); 

  cin>>q;
  vector<int> b(q,0);
  rep(i,0, q){
    cin>>b[i];
  }

  rep(i,0,q){
    int right=n-1;
    int left = 0;
    int diff = 0;
    while(right-left>1){
      int m = left+(right-left)/2;
      if(b[i]<a[m])right = m;
      else left = m;
    }
    cout<<min(abs(a[right]-b[i]),abs(b[i]-a[left]))<<endl;
  }
  return 0;
}

