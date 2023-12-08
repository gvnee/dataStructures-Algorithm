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
  bool per[n+1] = {};
  int have = 0;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    if(a[i] <= n) per[a[i]] = true;
    else if(a[i] >= n*2-1) have++;
  }

  int res = have;
  for(int i = 1;i<=n;i++){
    if(!per[i]){
      have--;
    }
    if(have < 0){
      cout<<"-1\n";
      return;
    }
  }
  cout<<res<<"\n";
  // for(int i = 1;i<=20;i++){
  //   cout<<i<<": ";
  //   for(int j = 1;j<=i;j++){
  //     cout<<i%j<<" ";
  //   }
  //   cout<<"\n";
  // }
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}