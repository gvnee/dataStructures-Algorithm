#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int t;
  cin>>t;
  int a, even = 0, odd = 0, p = 0, n = 0;
  while(t--){
    cin>>a;
    if(a%2) odd++;
    else even++;
    if(a<0) n++;
    else if(a>0) p++;
  }
  cout<<"Even: "<<even<<"\n";
  cout<<"Odd: "<<odd<<"\n";
  cout<<"Positive: "<<p<<"\n";
  cout<<"Negative: "<<n<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}