#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int h, w; cin>>h>>w;

  map<vector<vector<int>>, bool> visited;
  
  vector<vector<int>> a(h, vector<int> (w)), b(h, vector<int> (w));
  for(int i = 0;i<h;i++){
    for(int j = 0;j<w;j++){
      cin>>a[i][j];
    }
  }
  for(int i = 0;i<h;i++){
    for(int j = 0;j<w;j++){
      cin>>b[i][j];
    }
  }
  queue<pair<vector<vector<int>>, int>> q;
  q.push({a, 0});
  while(!q.empty()){
    auto [cur, depth] = q.front();
    q.pop();

    if(visited[cur]) continue;
    visited[cur] = true;

    if(cur == b){
      cout<<depth<<"\n";
      return;
    }

    for(int i = 0;i<h-1;i++){
      swap(cur[i], cur[i+1]);
      q.push({cur, depth+1});
      swap(cur[i], cur[i+1]);
    }

    for(int i = 0;i<w-1;i++){
      for(int j = 0;j<h;j++){
        swap(cur[j][i], cur[j][i+1]);
      }
      q.push({cur, depth+1});
      for(int j = 0;j<h;j++){
        swap(cur[j][i], cur[j][i+1]);
      }
    }
    
  }

  cout<<"-1\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}