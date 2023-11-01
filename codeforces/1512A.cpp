#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int &u : a)
    cin>>u;

  vector<int> b = a;
  sort(b.begin(), b.end());

  for(int i = 0;i<n;i++){
    if(a[i] != b[1]){
      cout<<i+1<<"\n";
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