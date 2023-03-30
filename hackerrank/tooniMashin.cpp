#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll n, a, b, c;
  cin>>n>>a>>b>>c;
  for(int i = 0;i<b;i++){
    n++;
    n /= 2;
  }
  for(int i = 0;i<a;i++){
    n /= 2;
  }
  for(int i = 0;i<c;i++){
    if(n>0) n--;
    n /= 2;
  }
  cout<<n<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}