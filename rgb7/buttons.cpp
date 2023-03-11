#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  long long res = 0;
  for(int i = 1; i<=n;i++) res += i*(n-i);
  cout<<res+n<<"\n";
  return 0;
}