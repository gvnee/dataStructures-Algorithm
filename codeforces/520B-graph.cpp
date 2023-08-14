#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int MxN = 100000;

void f(){
  int n, m;
  cin>>n>>m;

  queue<pair<int, int>> q;
  int dst[MxN] = {};
  bool visited[MxN] = {};
  
  q.push({n, 0});

  while(!q.empty()){
    pair<int, int> cur = q.front();
    q.pop();

    if(cur.first <= 0 || cur.first >= MxN) continue;
    if(visited[cur.first]) continue;
    visited[cur.first] = true;

    dst[cur.first] = cur.second;

    q.push({cur.first * 2, cur.second + 1});
    q.push({cur.first - 1, cur.second + 1});
  }

  cout<<dst[m]<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}