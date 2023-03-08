#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int n, m;
  cin>>n;
  ll a;
  stack<int> s;
  while(n--){
    cin>>a;
    if(s.empty() || s.top() != a) s.push(a);
  }
  cin>>m;
  while(m--){
    cin>>a;
    while(!s.empty() && a>=s.top()) s.pop();
    cout<<s.size() + 1<<"\n";
  }
  return 0;
}