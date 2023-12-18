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
  string a = "", b = "";
  bool f = false;
  for(char c:s){
    if(f) b += c;
    else if(a == ""){
      a += c;
    }
    else if(c == '0'){
      a += c;
    }
    else{
      b += c;
      f = true;
    }
  }

  if(b == "" || a[0] == '0' || b[0] == '0'){
    cout<<"-1\n";
    return;
  }
  
  int aa = stoi(a);
  int bb = stoi(b);
  if(aa>=bb){
    cout<<"-1\n";
  }
  else cout<<a<<" "<<b<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}