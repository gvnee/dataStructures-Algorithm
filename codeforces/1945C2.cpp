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
  int n;
  cin>>n;
  char s[n+1];
  for(int i = 1;i<=n;i++){
    cin>>s[i];
  }
  ll left[n+1] = {}, right[n+1] = {};
  left[1] = s[1] == '0' ? 1 : 0;
  for(int i = 2;i<=n;i++){
    if(s[i] == '0') left[i]++;
    left[i] += left[i-1];
  }
  right[n] = s[n] == '1' ? 1 : 0;
  for(int i = n-1;i>=1;i--){
    if(s[i] == '1') right[i]++;
    right[i] += right[i+1];
  }

  int res = 0;
  int mn = INT_MAX;
  int half = (n * 2) / 2;
  
  if(right[1] >= half){
    mn = half;
    res = 0;
  }

  for(int i = 1;i<=n;i++){
    cout<<left[i];
  }
  cout<<"\n";
  for(int i = 1;i<=n;i++){
    cout<<right[i];
  }
  cout<<"\n";

  for(int i = 1;i<=n;i++){
    int needLeft = (i+1)/2;
    int needRight = (n-i+1)/2;
    if(left[i] >= needLeft && right[i] >= needRight){
      if(abs(half - i) < mn){
        // cout<<mn<<" "<<abs(half - i)<<"\n";
        mn = abs(half - i);
        res = i;
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


// (n - i * 2) / 2
// (n - i)     / 2;