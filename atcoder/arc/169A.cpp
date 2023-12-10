#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n; cin>>n;
  int a[n], p[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  for(int i = 1;i<n;i++){
    cin>>p[i];
    p[i]--;
  }
  int neg = 0, pos = 0, z = 0;
  while(true){
    for(int i = 1;i<n;i++){
      a[p[i]] += a[i];
      if(a[p[i]] == 0) z++;
      else if(a[p[i]] < 0) neg++;
      else pos++;
    }
    if(z == n-1){
      cout<<"0\n";
      return;
    }
    else if(neg == n-1){
      cout<<"-\n";
      return;
    }
    else if(pos == n-1){
      cout<<"+\n";
      return;
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}