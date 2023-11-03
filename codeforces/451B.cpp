#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 100005;
int a[mxn];
vector<int> v;
void f(){
  int n;
  cin>>n;
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }

  for(int i = 1;i<n;i++){
    if(a[i] < a[i-1]) v.pb(i);
  }

  if(sz(v) == 0){
    cout<<"no\n";
    return;
  }

  
  
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}