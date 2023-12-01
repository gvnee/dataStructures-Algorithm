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
  int a[n];
  int mn = INT_MAX;
  int r = 0;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    if(mn > a[i]){
      mn = a[i];
      r = i+1;
    }
  }
  int c = 0;
  for(int i = 0;i<n;i++) if(mn == a[i]) c++;
  if(c == 1) cout<<r;
  else cout<<"Still Rozdil";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}