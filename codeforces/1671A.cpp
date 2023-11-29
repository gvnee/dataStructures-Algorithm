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
  string s; cin>>s;
  char cur = 'c';
  int n = 0;
  for(char c:s){
    if(cur == 'c'){
      cur = c;
      n++;
    }
    else if(cur != c){
      bool f = 0;
      while(n > 0){
        if(n % 3 == 0){
          f = true;
          break;
        }
        n -= 2;
      }
      if(!f && n != 0){
        cout<<"NO\n";
        return;
      }
      cur = c;
      n = 1;
    }
    else n++;
  }
  bool f = 0;
  while(n > 0){
    if(n % 3 == 0){
      f = true;
      break;
    }
    n -= 2;
  }
  if(!f && n != 0){
    cout<<"NO\n";
    return;
  }
  cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}