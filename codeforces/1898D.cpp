#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n; cin>>n;
  int a[n], b[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  for(int i = 0;i<n;i++){
    cin>>b[i];
  }
  ll res = 0;
  for(int i = 0;i<n;i++){
    res += abs(a[i] - b[i]);
  }
  pair<int, int> amx = {0, 0}, bmn = {INT_MAX, 0};
  for(int i = 0;i<n;i++){
    if(a[i] > amx.first){
      amx.first = a[i];
      amx.second = i;
    }
    if(b[i] < bmn.first){
      bmn.first = b[i];
      bmn.second = i;
    }
  }
  ll res2 = 0;
  swap(b[amx.second], b[bmn.second]);
  for(int i = 0;i<n;i++){
    res2 += abs(a[i] - b[i]);
  }
  cout<<max(res, res2)<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}