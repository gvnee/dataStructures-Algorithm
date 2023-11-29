#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int MXN = 1e6;
vector<ll> a(MXN);

bool comp(ll a, ll b){
  return a <= b;
}

void f(){
  int n, x;
  cin>>n>>x;
  auto it = upper_bound(all(a), x, comp);
  int second = 1;
  if(*it != x){
    it--;
    second = x - *it+1;
  }
  int d = distance(a.begin(), it);
  if(d == 0) d= 1;
  // cout<<*it<<" "<<d;

  for(int i = n;i>=1;i--){
    if(i == d+1) cout<<"b";
    else if(i == second) cout<<"b";
    else cout<<'a';
  }
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);

  a[0] = 1;
  for(int i = 1;i<MXN;i++){
    a[i] = a[i-1] + i-1;
  }
  
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}