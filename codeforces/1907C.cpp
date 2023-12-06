#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

int a[26] = {};
bool done(){
  int c = 0;
  for(int i = 0;i<26;i++) if(a[i]) c++;
  return c <= 1;
}

void f(){

  for(int i = 0;i<26;i++) a[i] = 0;
  
  int n; cin>>n;
  string s; cin>>s;
  for(char c:s) a[c-'a']++;

  while(!done()){
    sort(a, a+26);
    int mn = 0;
    int mx = 25;
    for(int i = 0;i<26;i++){
      if(a[i]){
        mn = i;
        break;
      }
    }
    a[mx]--;
    a[mn]--;
  }
  sort(a, a+26);
  cout<<a[25]<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}