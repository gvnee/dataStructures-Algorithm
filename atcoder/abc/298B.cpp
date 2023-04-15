#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back
vector<string> rotate(vector<string> s){
  int n = sz(s);
  vector<string> r = s;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      r[i][j] = s[n-j-1][i];
    }
  }
  return r;
}

void f(){
  int n;
  cin>>n;
  vector<string> a(n), b(n);
  int t;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      cin>>t;
      if(t == 1) a[i] += '1';
      else a[i] += '0';
    }
  }
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      cin>>t;
      if(t == 1) b[i] += '1';
      else b[i] += '0';
    }
  }
  // for(auto i:a) cout<<i<<"\n";
  // cout<<n<<"\n";
  bool ye = false;
  for(int k = 0;k<4;k++){
    bool no = false;
    for(int i = 0;i<n;i++){
      for(int j = 0;j<n;j++){
        if(a[i][j] == '1' && b[i][j] != '1'){
         no = true;
         break;
        }
      }
    }
    a = rotate(a);
    if(!no){
      ye = true;
      break;
    }
  }
  if(ye) cout<<"Yes\n";
  else cout<<"No\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}