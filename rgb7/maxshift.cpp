#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

string mxStr(string a, string b){
  for(int i = 0;i<sz(a);i++){
    if(a[i] > b[i]) return a;
    else if(a[i] < b[i]) return b;
  }
  return a;
}

void f(){
  string s; cin>>s;
  vector<int> v;
  string mx = s;
  for(int i = 0;i<sz(s);i++){
    rotate(s.begin(), s.begin()+1 , s.end());
    mx = mxStr(mx, s);
  }
  cout<<mx<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}