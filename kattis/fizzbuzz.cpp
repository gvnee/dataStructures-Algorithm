#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  int a, b, n;
  cin>>a>>b>>n;
  for(int i = 1;i<=n;i++){
    if(i%a == 0 && i%b==0) cout<<"FizzBuzz\n";
    else if(i%a == 0) cout<<"Fizz\n";
    else if(i%b == 0) cout<<"Buzz\n";
    else cout<<i<<"\n";
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // #ifndef ONLINE_JUDGE
  // freopen("input.in", "r", stdin);
  // #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}