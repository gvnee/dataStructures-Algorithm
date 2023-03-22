#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  string str;
  cin>>str;
  int freq[26] = {};
  for(int i = 0;i<str.size();i++){
    freq[str[i] - 'A']++;
  }
  // for(int i = 0;i<26;i++) cout<<freq[i]<<" ";
  int odd = 0;
  int oddIndex;
  for(int i = 0;i<26;i++){
    if(freq[i]%2==1){
      odd++;
      oddIndex = i;
    }
    if(odd > 1){
      cout<<"NO SOLUTION\n";
      return;
    }
  }

  deque<int> deq;
  if(odd == 1){
    for(int i = 0;i<freq[oddIndex];i++){
      deq.push_back(oddIndex);
    }
  }
  for(int i = 0;i<26;i++){
    if(odd == 1 && oddIndex == i) continue;
    for(int j = 0;j<freq[i]/2;j++){
      deq.push_back(i);
      deq.push_front(i);
    }
  }

  for(auto it:deq) cout<<char(it + 'A');

}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}