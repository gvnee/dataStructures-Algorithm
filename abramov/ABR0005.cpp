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
  double x, y; cin>>x>>y;
  cout.setf(ios::fixed|ios::showpoint);
  cout.precision(1);
  cout<<(x+y)/2<<"\n";
  cout<<sqrt(abs(x)*abs(y))<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}