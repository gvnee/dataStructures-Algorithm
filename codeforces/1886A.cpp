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
  for(int i = 1;i<n;i++){
    if(i % 3 == 0) continue;
    for(int j = i+1;j<n;j++){
      if(j % 3 == 0) continue;
      int cur = n-i-j;
      if(cur%3 && cur > 0 && cur != i && cur != j){
        cout<<"YES\n";
        cout<<i<<" "<<j<<" "<<cur<<"\n";
        return;
      }
    }
  }
  cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}