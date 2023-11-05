#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

bool notSub(string a, string b){
  for(int i = 0;i<sz(b)-sz(a)+1;i++){
    // cout<<b.substr(i, sz(a))<<" "<<a<<"\n";
    if(b.substr(i, sz(a)) == a) return false;
  }
  return true;
}

bool comp(string a, string b){
  return sz(a) < sz(b);
}

void f(){
  int n;
  cin>>n;
  string a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a, a+n, comp);
  for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
      if(notSub(a[i], a[j])){
        cout<<"NO\n";
        return;
      }
    }
  }
  cout<<"YES\n";
  for(int i = 0;i<n;i++) cout<<a[i]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}