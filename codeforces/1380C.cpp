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
  int n, x; cin>>n>>x;
  vector<int> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a.rbegin(), a.rend());
  int res = 0;
  int cm = INT_MAX, ci = 1;
  for(int u:a){
    cm = min(cm, u);
    if(cm * ci >= x){
      res++;
      ci = 1;
    }
    else ci++;
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}