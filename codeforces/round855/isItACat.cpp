#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
  #endif
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string meow = "meow";
    bool notMeow = false;
    int cur = 0;
    char c;
    for(int i = 0;i<n;i++){
      cin>>c;
      if(c != meow[cur] && c != meow[cur] - 32){
        if(cur >= 3){
          notMeow = true;
        }
        else if(c != meow[cur+1] && c != meow[cur+1] - 32){
          notMeow = true;
          // cout<<c<<"\n";
          // cout<<meow[cur]<<"\n";
          // cout<<meow[cur+1]<<"\n";
          // cout<<char(meow[cur+1] - 32)<<"\n";
        }
        else cur++;
      }
    }
    cout<<cur<<"\n";
    if(notMeow || cur < 3) cout<<"NO\n";
    else cout<<"YES\n";
  }
  return 0;
}