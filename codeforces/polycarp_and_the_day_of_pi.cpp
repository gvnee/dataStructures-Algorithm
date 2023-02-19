#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    string PI = "314159265358979323846264338327";
    int t;
    cin>>t;
    string n;
    while(t--){
      cin>>n;
      int c = 0;
      for(int i = 0;i<n.size();i++){
        if(n[i] == PI[i]) c++;
        else break;
      }
      cout<<c<<"\n";
    }
    

    return 0;
}