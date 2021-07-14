//https://atcoder.jp/contests/typical90/tasks/typical90_i

#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,s,n)for(int i=s;i<(int)(n);i++)
using namespace std;
using Graph=vector<vector<int> >;
using p=pair<long,long>;
const int64_t mod = 1000000007;

class UnionFind {
public:
	vector<int> par;

	void init(int sz) {
		par.resize(sz, -1);
	}
	int root(int pos) {
		if (par[pos] == -1) return pos;
		par[pos] = root(par[pos]);
		return par[pos];
	}
	void unite(int u, int v) {
		u = root(u); v = root(v);
		if (u == v) return;
		par[u] = v;
	}
	bool same(int u, int v) {
		if (root(u) == root(v)) return true;
		return false;
	}
};

int h;int w;int q;
UnionFind tree;
bool used[2009][2009];

void q1(int x,int y){
  int dx[4]={-1,0,1,0};
  int dy[4]={0,1,0,-1};
  rep(i,0,4){
    int nx = x + dx[i]; int ny = y + dy[i];
    if(nx<0 || nx>=w || ny<0 || ny>=h)continue;
    if(!used[nx][ny])continue;
    int h1 = (y) * w + (x);
    int h2 = (ny) * w + (nx);
    tree.unite(h1,h2);
  }
  used[x][y]=true;
}

bool q2(int x1,int y1, int x2,int y2){
  if(used[x1][y1]==false || used[x2][y2]==false)return false;
  int h1 = (y1) * w + (x1);
  int h2 = (y2) * w + (x2);
  if(tree.same(h1,h2))return true;
  return false;
}


int main() {
  
  cin>>h>>w>>q;
  tree.init(h*w);
  
  rep(i,0,q){
    int t;
    cin>>t;
    if(t==1){
      int x,y;
      cin>>y>>x;
      q1(x-1,y-1);
    }else{
      int x1,x2,y1,y2;
      cin>>y1>>x1>>y2>>x2;
      bool ans = q2(x1-1,y1-1,x2-1,y2-1);
      if(ans)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
  }
  return 0;
}

