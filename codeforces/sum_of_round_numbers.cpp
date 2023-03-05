#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input.txt", "r", stdin);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int power = 1;
    vector<int> ans;
    while(n>0){
      if(n%10!=0) ans.push_back((n%10) * power);
      n /= 10;
      power *= 10;
    }
    cout<<ans.size()<<"\n";
    for(auto i : ans) cout<<i<<" ";
    cout<<"\n";
  }
}