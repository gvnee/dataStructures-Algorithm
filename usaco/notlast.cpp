#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  unordered_map<string, int> m;
  int n, a; cin>>n;
  string s;
  for(int i = 0;i<n;i++){
    cin>>s>>a;
    m[s] += a;
  }
  set<int> st;
  for(auto &it:m){
    st.insert(it.second);
  }

  int second = 0, i = 1, pos = 2;
  if(sz(m) < 7) pos = 1;
  for(int x:st){
    if(i == pos){
      second = x;
      break;
    }
    i++;
  }
  string res = "";
  for(auto &it:m){
    if(it.second == second){
      if(res == ""){
        res = it.first;
      }
      else{
        cout<<"Tie\n";
        return;
      }
    }
  }
  if(sz(st) == 1 && sz(m) == 7) cout<<"Tie\n";
  else cout<<res<<"\n";
  
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("notlast.in", "r", stdin);
  freopen("notlast.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}