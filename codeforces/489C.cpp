#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int m, s;
  cin>>m>>s;

  if(s == 0){
    if(m == 1) cout<<"0 0\n";
    else cout<<"-1 -1\n";
    return;
  }
  
  string mx = "";
  for(int i = 1;i<=m;i++){
    int k = min(9, s);
    mx += '0' + k;
    s -= k;
  }

  if(s > 0){
    cout<<"-1 -1\n";
    return;
  }

  string mn = mx;
  reverse(mn.begin(), mn.end());

  int j = 0;
  while(mn[j] == '0') j++;
  mn[0]++;
  mn[j]--;
  cout<<mn<<' '<<mx<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}