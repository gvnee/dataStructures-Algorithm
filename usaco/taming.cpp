#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  if(a[0] > 0){
    cout<<-1<<"\n";
    return;
  }
  a[0] = 0;

  int m = 0, M = 0;
  int cur = -1;
  for(int i = n-1;i>=0;i--){
    if(cur != -1 && a[i] != -1 && cur != a[i]){
      cout<<"-1\n";
      return;
    }
    if(cur == -1) cur = a[i];
    if(a[i] == -1) a[i] = cur;
    if(a[i] == 0) m++;
    if(a[i] == -1) M++;
    if(cur > -1) cur--;
  }

  cout<<m<<" "<<m + M<<"\n";
  
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("taming.in", "r", stdin);
  freopen("taming.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}