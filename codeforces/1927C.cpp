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
  int n, m; cin>>n>>m;
  int k; cin>>k;
  int a;
  char v[k+1] = {};
  for(int i = 0;i<n;i++){
    cin>>a;
    if(a <= k){
      v[a] = 'f';
    }
  }
  for(int j = 0;j<m;j++){
    cin>>a;
    if(a <= k){
      if(v[a] == 'f') v[a] = 'b';
      else if(v[a] != 'b') v[a] = 's';
    }
  }
  int f = 0, s = 0, both = 0;
  for(int i = 1;i<=k;i++){
    if(v[i] == 'f') f++;
    else if(v[i] == 's') s++;
    else if(v[i] == 'b') both++;
  }

  int needf = k/2;
  int needs = k/2;
  needf -= min(needf, f);
  needs -= min(needs, s);
  int temp = min(needf, both);
  needf -= temp;
  both -= temp;
  needs -= min(needs, both);
  // cout<<needf<<" "<<both<<"\n";
  if(needf || needs) cout<<"NO\n";
  else cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}