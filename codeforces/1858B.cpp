#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, m, d;
  cin>>n>>m>>d;
  int temp;
  vector<int> seller;
  for(int i = 0;i<m;i++){
    cin>>temp;
    seller.pb(temp);
  }

  int res = 0, last = 0, remove = m;
  
  for(int cur:seller){
    else{

    }
  }
  cout<<res<<' '<<remove<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}