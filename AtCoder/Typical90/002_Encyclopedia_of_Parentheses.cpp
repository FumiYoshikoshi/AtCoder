//https://atcoder.jp/contests/typical90/tasks/typical90_b

#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n)for(int i=0;i<(int)(n);i++)
using namespace std;
using Graph=vector<vector<int> >;
using p=pair<long,long>;
const int64_t mod = 1000000007;

int n;
bool check(string s){
  int open = 0;
  for(char c:s){
    if(c=='(')open+=1;
    else open -=1;
    if(open<0)return false;
  }
  if(open!=0)return false;
  return true;

}


int main() {
  cin>>n;
  if(n==0 || n%2==1)return 0;
  for(int i=0;i<(1<<n);i++){
    string s = "";
    for(int j=n-1;j>=0;j--){
      if((i&(1<<j))==0)s+="(";
      else s+=")";
    }
    if(check(s))cout<<s<<endl;
    
  }
  return 0;

}

