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
  bool seen[n+1] = {};
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a, a+n);
  int res = 0;
  int cur = 1;
  for(int i = 0;i<n;i++){
    if(a[i] <= n){
      if(!seen[a[i]]){
        seen[a[i]] = true;
      }
      else{
        
      }
    }
    else{
      int can = a[i]/2;
      if(a[i] % 2 == 0) can--;
      if(can >= cur){
        res++;
        while(!seen[cur]){
          cur++;
        }
      }
      else{
        cout<<"-1\n";
        return;
      }
    }
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