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
  int a[n];
  int b[26] = {};
  string res = "";
  for(int i = 0;i<n;i++){
    cin>>a[i];
    for(int j = 0;j<26;j++){
      if(a[i] == b[j]){
        res += char(j + 'a');
        b[j]++;
        break;
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