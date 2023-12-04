#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int MXN = 10000;

void f(){
  string blank, card;
  cin>>blank;
  int cards[MXN];
  for(int i = 1;i<MXN;i++) cards[i] = 1;
  int cardNumber = 0;
  while(cin>>card){
    cardNumber = stoi(card.substr(0, sz(card)-1));
    string str;
    map<string, int> winning;
    while(cin>>str){
      if(str == "|") break;
      winning[str]++;
    }
    int curWin = 0;
    while(cin>>str){
      if(str == "Card") break;
      if(winning[str] > 0){
        curWin++;
      }
    }

    for(int i = cardNumber+1;i<=cardNumber+curWin;i++){
      cards[i] += cards[cardNumber];
    }

  }
  ll res = 0;
  for(int i = 1;i<=cardNumber;i++){
    res += cards[i];
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}