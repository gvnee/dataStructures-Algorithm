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
  int a[26] = {};
  for(char c:s) a[c-'a']++;
  sort(a, a+n);
  if(a[25] >= n-a[25]){
    cout<<a[25]-(n-a[25])<<"\n";
  }
  else cout<<n%2<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}