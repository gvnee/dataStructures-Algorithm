#include<iostream>
#include<vector>
using namespace std;
int main(){
  int N = 100;
  vector<int> adj[N];
  adj[1].push_back(2);
  adj[2].push_back(3);
  adj[2].push_back(4);
  adj[3].push_back(4);
  adj[4].push_back(1);
  for(auto it:adj){
    for(int i = 0;i<it.size();i++){
      cout<<"node "<<i<<" is connected to "<<it[i]<<" \n"[i==it.size()-1];
    }
  }
}