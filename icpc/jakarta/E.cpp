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
  int n; cin>>n;
  int used[n*2] = {};
  vector<int> v(n*2);
  for(int i = 0;i<n*2;i++){
    cin>>v[i];
  }
  vector<int> a, b;
  int cur = 0;
  bool aNow = true;
  while(cur < sz(v)){
    if(aNow) a.pb(v[cur]);
    else b.pb(v[cur]);
    used[cur] = true;
    int need = cur+1;
    while(need < sz(v)){
      if(!used[need] && v[need] >= a.back()){
        if(aNow) b.pb(v[need]);
        else a.pb(v[need]);
        used[need] = true;
        break;
      }
      need++;
    }
    while(used[cur]){
      cur++;
    }
    aNow = !aNow;
  }

  int i = 0, j = 0;
  vector<int> c;
  while(i<sz(a) && j<sz(b)){
    cout<<a[i]<<" "<<b[j]<<"\n";
    if(a[i] < b[j]){
      c.pb(a[i]);
      i++;
    }
    else{
      c.pb(b[j]);
      j++;
    }
  }
  while(i<sz(a)){
    c.pb(a[i]); i++;
  }
  while(j<sz(b)){
    c.pb(b[j]); j++;
  }
  for(int i = 0;i<sz(c);i++) cout<<c[i]<<" ";
  if(c != v){
    cout<<"-1\n";
    // return;
  }
  
  for(int x:a) cout<<x<<" ";
  cout<<"\n";
  for(int x:b) cout<<x<<" ";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}