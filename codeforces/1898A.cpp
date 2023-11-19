#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

string s;
int n, k;
int cnt(){
  int cn = 0;
  for(char c:s) if(c == 'B') cn++;
  return cn;
}

// void f(){
//   int n, k; cin>>n>>k;
//   cin>>s;
//   int cur = cnt();
//   if(cur == k){
//     cout<<"0\n";
//     return;
//   }
//   int res = 0;
//   vector<pair<int, char>> v;
//   while(cnt() != k){
//     if(cnt() > k){
//       int x = 0, i;
//       for(i = n-1;i>=0;i--){
//         if(s[i] == 'A') continue;
//         if(x == k) break;
//         if(s[i] == 'B') x++;
//       }
//       res++;
//       v.pb({i-1, 'A'});
//     }
//     else{

//     }

//   }
// }

void f(){
  int n, k; cin>>n>>k;
  cin>>s;
  if(cnt() == k){
    cout<<"0\n";
    return;
  }
  if(cnt() > k){
    int b = 0, i;
    for(i = 0;i<n;i++){
      if(s[i] == 'B') b++;
      if(b == cnt() - k) break;
    }
    cout<<1<<"\n";
    cout<<i+1<<" A\n";
  }
  else{
    int a = 0, i;
    for(i = 0;i<n;i++){
      if(s[i] == 'A') a++;
      if(a == k-cnt()) break;
    }
    cout<<1<<"\n";
    cout<<i+1<<" B\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}