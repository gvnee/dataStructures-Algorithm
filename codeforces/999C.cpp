#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
queue<int> a[26];
void f(){
  int n, k;
  cin>>n>>k;
  bool r[n] = {};
  string s;
  cin>>s;
  bool done = false;
  for(int l = 'a';l<='z';l++){
    for(int i = 0;i<n;i++){
      if(s[i] == l){
        r[i] = true;
        k--;
        if(k == 0){
          done = true;
          break;
        }
      }
    }
    if(done) break;
  }
  for(int i = 0;i<n;i++){
    if(r[i]) continue;
    cout<<s[i];
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}