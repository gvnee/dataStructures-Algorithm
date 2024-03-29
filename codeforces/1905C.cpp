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
  int n; cin>>n;
  string s; cin>>s;

  if(is_sorted(all(s))){
    cout<<"0\n";
    return;
  }
  
  vector<char> largest;
  for(int i = n-1;i>=0;i--){
    if(largest.empty() || largest.back() <= s[i]){
      largest.pb(s[i]);
    }
  }
  vector<char> cpy = largest;
  sort(all(cpy));
  if(cpy == largest){
    cout<<sz(largest) - 1<<"\n";
  }
  else cout<<"-1\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}