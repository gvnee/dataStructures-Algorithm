#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int &i:a){
    cin>>i;
    if(i>0) i = 1;
    else if(i<0) i = 2;
  }
  for(int i:a) cout<<i<<" ";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}