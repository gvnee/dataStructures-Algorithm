#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, q;
  cin>>n>>q;
  string s, op;
  cin>>s;
  while(q--){
    cin>>op;
    int l, r;
    if(op == "substr"){
      cin>>l>>r;
      cout<<s.substr(min(l, r)-1, max(l, r) - min(l, r)+1)<<"\n";
    }
    if(op == "sort"){
      cin>>l>>r;
      sort(s.begin()+min(l, r)-1, s.begin()+max(l, r));
    }
    if(op == "pop_back"){
      s.pop_back();
    }
    if(op == "front"){
      cout<<s.front()<<"\n";
    }
    if(op == "back"){
      cout<<s.back()<<"\n";
    }
    if(op == "reverse"){
      cin>>l>>r;
      reverse(s.begin()+min(l, r)-1, s.begin()+max(l, r));
    }
    if(op == "print"){
      int x; cin>>x; x--;
      cout<<s[x]<<"\n";
    }
    if(op == "push_back"){
      char c;
      cin>>c;
      s.pb(c);
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}