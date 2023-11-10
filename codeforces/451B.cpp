#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 100005;
int a[mxn];
vector<int> v;

bool sorted(int n){
  for(int i = 1;i<n;i++) if(a[i] < a[i-1]) return false;
  return true;
}

void f(){
  int n;
  cin>>n;
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  if(sorted(n)){
    cout<<"yes\n";
    cout<<"1 1\n";
    return;
  }
  int l = 0, r = n-1;
  for(int i = 0;i<n-1;i++){
    if(a[i] > a[i+1]){
      l = i;
      break;
    }
  }
  for(int i = 1;i<n;i++){
    if(a[i] < a[i-1]) r = i;
  }
  reverse(a + l, a+r+1);

  if(sorted(n)) cout<<"yes\n"<<l+1<<' '<<r+1<<"\n";
  else cout<<"no\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}