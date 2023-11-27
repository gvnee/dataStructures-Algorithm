#include<bits/stdc++.h>
using namespace std;

#define all(x) (x.begin(), x.end())
#define sz(x) int((x).size())
#define pii pair<int, int>
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int k; cin>>k;
  k *= 2;
  int a[10] = {};
  for(int i = 0;i<4 * 4;i++){
    char c;
    cin>>c;
    if(c != '.') a[c-'0']++;
  }
  for(int i = 1;i<=9;i++){
    if(a[i] > k){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}