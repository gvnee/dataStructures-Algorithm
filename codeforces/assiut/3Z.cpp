#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, q;
  cin>>n>>q;
  vector<int> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  while(q--){
    int x;
    cin>>x;
    bool found = binary_search(a.begin(), a.end(), x);
    if(!found){
      cout<<"not found\n";
    }
    else cout<<"found\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}