#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, d;
  cin>>n>>d;
  string str;
  cin>>str;

  // int lili = 0;
  // for(int i = 0;i<str.size();i++){
  //   if(str[i] == '1') lili++;
  // }

  queue<int> q;
  bool visited[n] = {};
  int distance[n] = {};

  vector<int> v[n];
  
  for(int i = 0;i<str.size();i++){
    
    if(str[i] == '0') continue;

    for(int j = i+1; j<i+d+1 && j<str.size(); j++){
      if(str[j] == '1') v[i].push_back(j);
    }
  }

  int x = 0;
  visited[x] = true;
  distance[x] = 0;
  q.push(x);

  while(!q.empty()){
    int s = q.front(); q.pop();
    for(auto u : v[s]){
      if(visited[u]) continue;
      visited[u] = true;
      distance[u] = distance[s] + 1;
      q.push(u);
    }
  }

  // for(int i = 0;i<n;i++){
  //   cout<<distance[i]<<" \n"[i==n-1];
  // }

  // for(auto it:v){
  //   for(int j = 0;j<it.size();j++){
  //     cout<<it[j]<<" \n"[j==it.size()-1];
  //   }
  // }
  if(distance[n-1] == 0) cout<<"-1";
  else cout<<distance[n-1]<<"\n";

}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}