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
  int l; cin>>l;
  string com;
  unsigned long long x = 0;
  unsigned long long amount = 1;
  unsigned long long lastN = 1;
  while(l--){
    cin>>com;
    if(com == "for"){
      ll n; cin>>n;
      amount *= n;
      lastN = n;
    }
    else if(com == "end"){
      amount /= lastN;
    }
    else x += amount;
    if(x > (1LL<<32)-1){
      cout<<"OVERFLOW!!!\n";
      return;
    }
  }
  cout<<x<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}