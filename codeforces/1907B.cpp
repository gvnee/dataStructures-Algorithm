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
  string str; cin>>str;
  vector<char> v;
  bool ignore[sz(str)] = {};
  vector<int> up, low;
  int cur = 0;
  for(char c:str){
    if(c == 'B'){
      ignore[cur] = true;
      cur++;
      if(up.empty()) continue;
      ignore[up.back()] = true;
      up.pop_back();
    }
    else if(c == 'b'){
      ignore[cur] = true;
      cur++;
      if(low.empty()) continue;
      ignore[low.back()] = true;
      low.pop_back();
    }
    else{
      if(isupper(c)) up.pb(cur);
      else low.pb(cur);
      cur++;
    }
  }
  for(int i = 0;i<sz(str);i++){
    if(!ignore[i]) cout<<str[i];
  }
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}