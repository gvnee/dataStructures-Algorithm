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
  string blank, color;
  ll number = 0, count = 0;
  int red = 12, green = 13, blue = 14;
  ll res1 = 0, res2 = 0;
  while(cin>>blank>>number>>blank){
    bool endOfBatch = false, impossible = false;;
    int curBlue = 0, curGreen = 0, curRed = 0;
    ll minBlue = 0, minGreen = 0, minRed = 0;
    while(cin>>count>>color){
      bool last = false;
      if(color.back() == ';'){
        endOfBatch = true;
        color = color.substr(0, sz(color)-1);
      }
      else if(color.back() == ','){
        color = color.substr(0, sz(color)-1);
      }
      else last = true;

      if(color == "blue"){
        curBlue += count;
        minBlue = max(minBlue, count);
      }
      if(color == "green"){
        curGreen += count;
        minGreen = max(minGreen, count);
      }
      if(color == "red"){
        curRed += count;
        minRed = max(minRed, count);
      }

      if(endOfBatch || last){
        if(curBlue > blue || curGreen > green || curRed > red){
          impossible = true;
        }
        curBlue = 0, curRed = 0, curGreen = 0;
        endOfBatch = 0;
      }

      if(last) break;
    }
    ll curPow = minRed * minBlue * minGreen;
    res2 += curPow;
    if(!impossible) res1 += number;
  }
  cout<<res2<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}