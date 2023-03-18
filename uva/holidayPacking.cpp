  #include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){

}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  for(int i = 1;i<=t;i++){
    int l, w, h;
    cin>>l>>w>>h;
    bool tooLong = l > 20;
    bool tooWide = w > 20;
    bool tooHigh = h > 20;
    
    if(tooLong || tooWide || tooHigh){
      printf("Case %d: bad\n", i);
      continue;
    }
    else{
      printf("Case %d: good\n", i);
      continue;
    }
  }
  
  return 0;
}