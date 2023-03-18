#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int k, n;
  cin>>k>>n;
  unordered_map<int , vector<int> > m;
  for(int i = 0;i<n;i++){
    cin>>temp;
    m[temp].push_back(i);
  }

  if(k%2==0 && m[k/2].size() > 1){
    cout<<m[k/2][0]+1<<' '<<m[k/2][1]+1<<"\n";
    return;
  }

  for(auto i:m){
    if(k%2==0 && k / 2 == i.first) continue;
    if(m.count(k - i.first) != 0){
      int index1 = i.second[0]+1;
      int index2 = m[k-i.first][0]+1;
      if(index1>index2){
        cout<<index2<<' '<<index1<<"\n";
      }
      else{
        cout<<index1<<' '<<index2<<"\n";
      }
      return;
    }
  }
  

}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}