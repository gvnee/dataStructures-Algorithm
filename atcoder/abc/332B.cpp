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
  ll k, mg, mm;
  cin>>k>>mg>>mm;
  ll m = 0, g = 0;
  for(int i = 0;i<k;i++){
    if(g == mg) g = 0;
    else if(m == 0) m = mm;
    else{
      if(m > mg - g){
        m -= mg-g;
        g = mg;
      }
      else{
        g += m;
        m = 0;
      }
    }
  }

  cout<<g<<" "<<m<<"\n";
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}