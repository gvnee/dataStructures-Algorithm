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
  int usb, ps, both;
  cin>>usb>>ps>>both;
  int m; cin>>m;
  vector<int> u, p;
  while(m--){
    int v;
    string s;
    cin>>v>>s;
    if(s == "USB") u.pb(v);
    else p.pb(v);
  }
  sort(all(u));
  sort(all(p));
  ll c = 0, res = 0;
  int usbIndex = 0;
  for(int i = 0;i<usb && i<sz(u);i++){
    c++;
    res+=u[i];
    usbIndex = i+1;
  }
  int psIndex = 0;
  for(int i = 0;i<ps && i<sz(p);i++){
    c++;
    res+=p[i];
    psIndex = i+1;
  }
  for(int i = 0;i<both;i++){
    if(usbIndex < sz(u) && psIndex < sz(p)){
      if(u[usbIndex] < p[psIndex]){
        res += u[usbIndex];
        usbIndex++;
      }
      else{
        res += p[psIndex];
        psIndex++;
      }
    }
    else if(usbIndex < sz(u)){
      res += u[usbIndex];
      usbIndex++;
    }
    else if(psIndex < sz(p)){
      res += p[psIndex];
      psIndex++;
    }
    else break;
    c++;
  }
  cout<<c<<" "<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}