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
  vector<int> a(3);
  for(int i = 0;i<3;i++) cin>>a[i];
  sort(all(a));
  int mn = a[0];
  for(int i = 0;i<3;i++){
    int cur = a.back();
    a.pop_back();
    if(cur != mn) a.pb(cur - mn);
    sort(all(a));
  }
  
  bool dif = false;
  for(int i = 1;i<3;i++){
    if(a[i] != a[i-1]){
      dif = true;
    }
  }
  if(!dif) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}