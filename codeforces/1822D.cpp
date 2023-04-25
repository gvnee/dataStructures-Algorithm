#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

// 8 7 2 5 4 3 6 1
// 1 8 2 7 3 6 4 5

void f(){
  int n;
  cin>>n;
  if(n%2==1 && n!=1){
    cout<<-1<<"\n";
    return;
  }
  cout<<n<<" ";
  for(int i = n-1;i>=1;i-=2){
    cout<<i<<" ";
    if(i == 1) break;
    cout<<n + 1 - i<<" ";
  }
  cout<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}