#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int MXN = 5e6;
int dsu[MXN] = {};
int siz[MXN] = {};

int find(int a){
  int root = a;
  while(root != dsu[root]) root = dsu[root];

  while(a != root){
    int next = dsu[a];
    dsu[a] = root;
    a = next;
  }

  return root;
}

void unite(int a, int b){
  a = find(a);
  b = find(b);
  if(a == b) return;
  if(siz[a] < siz[b]) swap(a, b);

  siz[a] += siz[b];
  dsu[b] = a;
}

vector<int> componentsInGraph(vector<vector<int>> bg){
  for(int i = 1;i<=sz(bg)*2;i++){
    dsu[i] = i;
    siz[i] = 1;
  }
  for(auto el : bg){
    unite(el[0], el[1]);
  }

  vector<int> res(2);
  res[0] = INT_MAX;
  for(int i = 1;i<=sz(bg)*2;i++){
    int cur = siz[find(i)];
    if(cur >= 2){
      res[0] = min(res[0], cur);
    }
    res[1] = max(res[1], cur);
  }
  return res;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);

  int n; cin>>n;
  vector<vector<int>> bg;
  while(n--){
    int a, b;
    cin>>a>>b;
    bg.pb({a, b});
  }
  vector<int> res = componentsInGraph(bg);
  cout<<res[0]<<" "<<res[1]<<"\n";
  return 0;
}