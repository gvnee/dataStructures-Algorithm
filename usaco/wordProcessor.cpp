#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, k;
  cin>>n>>k;
  string str[n];
  for(int i = 0;i<n;i++){
    cin>>str[i];
  }
  int curLine = 0;
  for(int i = 0;i<n;i++){
    if(str[i].size() + curLine > k){
      cout<<"\n"<<str[i];
      curLine = str[i].size();
    }
    else{
      if(i == 0){
        cout<<str[i];
      }
      else cout<<' '<<str[i];
      curLine += str[i].size();
    }
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // #ifndef ONLINE_JUDGE
  freopen("word.in", "r", stdin);
  freopen("word.out", "w", stdout);
  // #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}