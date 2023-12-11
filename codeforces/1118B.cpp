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
  int a[n+1];

  ll even[n+1] = {};
  ll odd[n+1] = {};
  
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    if(i%2){
      odd[i] = odd[i-1] + a[i];
      even[i] = even[i-1];
    }
    else{
      odd[i] = odd[i-1];
      even[i] = even[i-1] + a[i];
    }
  }

  int res = 0;
  for(int i = 1;i<=n;i++){
    ll curEven = even[i-1];
    ll curOdd = odd[i-1];
    curEven += odd[n] - odd[i];
    curOdd += even[n] - even[i];
    if(curEven == curOdd) res++;
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}