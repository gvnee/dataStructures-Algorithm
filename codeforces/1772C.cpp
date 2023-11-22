#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, k; cin>>n>>k;
  vector<int> a(n);
  for(int i = 0;i<=n;i++){
    a[0] = 1;
    int cur = 1;
    bool no = 0;
    for(int j = 1;j<n;j++){
      a[j] = a[j-1] + cur;
      if(i<j) cur++;
      if(a[j] > k){
        no = 1;
        break;
      }
    }
    if(!no){
      for(int x:a){
        cout<<x<<" ";
      }
      cout<<"\n";
      return;
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}