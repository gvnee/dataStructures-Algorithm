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
  int t, c = 0;
  int a[10000];
  while(cin>>t){
    a[c] = t;
    c++;
  }
  int o = 0, y = 0;
  for(int i = 1;i<c-1;i++){
    if(a[i] > a[i-1] && a[i]>a[i+1]) o++;
    if(a[i] < a[i-1] && a[i]<a[i+1]) y++;
  }
  cout<<o<<" "<<y;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}