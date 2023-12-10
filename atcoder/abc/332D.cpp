#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

vector<vector<int>> b;
int h, w;

vector<vector<int>> swapR(int i, vector<vector<int>> a){
  swap(a[i], a[i+1]);
  return a;
}

vector<vector<int>> swapC(int i, vector<vector<int>> a){
  i -= h;
  vector<vector<int>> c = a;
  for(int j = 0;j<h;j++){
    c[j][i] = a[j][i+1];
  }
  for(int j = 0;j<h;j++){
    c[j][i+1] = a[j][i];
  }
  return c;
}

queue<int> q;

void bfs(vector<vector<int>> a, int depth, int from){
  if(a == b){
    cout<<depth<<"\n";
    return;
  }
  for(int i = 0;i<h-1;i++){
    if(i == from) continue;
    vector<vector<int>> c = swapR(i, a);
    bfs(c, depth+1, i);
  }
  for(int i = h;i<w-1;i++){
    if(i == from) continue;
    vector<vector<int>> c = swapC(i, a);
    bfs(c, depth+1, i);
  }
}

void f(){
  cin>>h>>w;
  map<int, int> aa, bb;
  vector<vector<int>> a(h, vector<int> (w));
  vector<vector<int>> bc(h, vector<int> (w));
  
  for(int i = 0;i<h;i++){
    for(int j = 0;j<w;j++){
      cin>>a[i][j];
      aa[a[i][j]]++;
    }
  }
  for(int i = 0;i<h;i++){
    for(int j = 0;j<w;j++){
      cin>>bc[i][j];
      bb[bc[i][j]]++;
    }
  }

  if(aa != bb){
    cout<<"-1\n";
    return;
  }
  b = bc;
  queue<int> q;
  while(!q.empty()){

  }
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}