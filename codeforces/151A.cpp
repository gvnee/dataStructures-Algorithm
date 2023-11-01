#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, bottles, millDrink, limes, slices, salt, drinkPerPerson, saltPerPerson;
  cin>>n>>bottles>>millDrink>>limes>>slices>>salt>>drinkPerPerson>>saltPerPerson;
  int a = (bottles * millDrink)/drinkPerPerson;
  int b = limes * slices;
  int c = salt / saltPerPerson;
  int res = min(a, min(b, c))/n;
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}