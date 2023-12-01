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
  int a[n][n];
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      cin>>a[i][j];
    }
  }
  int r[n];
  for(int i = 0;i<n;i++) r[i] = (1<<30)-1;

  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      if(i == j) continue;
      r[i] &= a[i][j];
    }
  }

  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      if(i != j && a[i][j] != (r[i] | r[j])){
        cout<<"NO\n";
        return;
      }
    }
  }
  cout<<"YES\n";
  for(int i = 0;i<n;i++) cout<<r[i]<<" ";
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}