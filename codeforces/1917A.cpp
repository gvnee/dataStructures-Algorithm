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
  int neg = 0;
  bool zero = false;
  for(int i = 0;i<n;i++){
    ll a; cin>>a;
    zero |= a == 0;
    if(a<0){
      neg++;
    }
  }
  if(zero){
    cout<<"0\n";
  }
  else if(neg%2){
    cout<<"0\n";
  }
  else{
    cout<<"1\n1 0\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}