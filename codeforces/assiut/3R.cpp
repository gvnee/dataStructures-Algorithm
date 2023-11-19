#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  unordered_map<int, int> a, b;
  for(int i = 0;i<n;i++){
    int t;
    cin>>t;
    a[t]++;
  }
  for(int i = 0;i<n;i++){
    int t;
    cin>>t;
    b[t]++;
  }
  for(auto [ff, ss]:a){
    if(ss != b[ff]){
      cout<<"no\n";
      return;
    }
  }
  for(auto [ff, ss]:b){
    if(ss != a[ff]){
      cout<<"no\n";
      return;
    }
  }
  cout<<"yes\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}