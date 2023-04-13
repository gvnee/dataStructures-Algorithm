#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

const int mxn = 1e5+10;
int n, m, k;

vector<int> fr[mxn]; // friends
vector<int> c[mxn]; // connections

set<int> s;

int id[mxn]; // component IDs

ll cur = 0; // current ID

void dfs(int a, int newId){ // depth first search
  if(id[a] == newId) return;
  id[a] = newId;
  for(int i:c[a])
    dfs(i, newId);
}

void preProcess(){
  memset(id, -1, sizeof(id)); // id = {-1, -1, -1, -1, ...}
  for(int i:s)
    if(id[i] == -1)
      dfs(i, cur), cur++;
}

int main(){
  cin>>n>>m>>k;
  int a, b;
  for(int i = 0;i<m;i++){
    cin>>a>>b;
    fr[a].pb(b);
    fr[b].pb(a);
  }
  for(int i = 0;i<k;i++){
    cin>>a>>b;
    c[a].pb(b);
    c[b].pb(a);
    s.insert(a);
    s.insert(b);
  }
  preProcess();

  int q; cin>>q;
  char op;
  while(q--){
    cin>>op;
    if(op == 'F'){
      cin>>a>>b;
      fr[a].pb(b);
      fr[b].pb(a);
    }
    else if(op == 'T'){
      cin>>a>>b;
      c[a].pb(b);
      c[b].pb(a);

      if(id[a] == -1 && id[b] == -1){
        id[a] = cur;
        id[b] = cur;
        cur++;
      }
      else if(id[a] == -1) id[a] = id[b];
      else if(id[b] == -1) id[b] = id[a];
      else dfs(a, max(id[a], id[b]));
    }
    else {
      cin>>a;
      
      int res = 0;
      for(int i:fr[a])
        if(id[a] == id[i]) res++;
      cout<<res<<"\n";
    }
  }

  return 0;
}