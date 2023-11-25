#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  ll res = 0;
  int A = 0;
  for(int i = 0;i<n-1;i++){
    if(s[i] == 'A'){
      A++;
      if(s[i+1] == 'B'){
        res += A;
        swap(s[i], s[i+1]);
        A = 0;
      }
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}