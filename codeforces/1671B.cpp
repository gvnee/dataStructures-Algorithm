#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int mxn = 1e6;

void f(){
  int n; cin>>n;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  vector<int> v;
  int gap = 0;
  for(int i = 1;i<n;i++){
    if(a[i] - a[i-1] > 1){
      gap++;
      v.pb(a[i] - a[i-1]);
    }
  }

  if(gap > 2){
    cout<<"NO\n";
  }
  else if(gap == 1 && v[0] <= 3){
    cout<<"YES\n";
  }
  else if(gap == 2 && v[0] <= 2 && v[1] <= 2){
    cout<<"YES\n";
  }
  else if(gap == 0) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}