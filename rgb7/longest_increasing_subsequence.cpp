  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int arr[101];
    for(int i = 0;i<n;i++){
      cin>>arr[i];
    }
    int length[101];
    for(int i = 0;i<n;i++){
      length[i] = 1;
      for(int j = 0;j<i;j++){
        if(arr[j]<arr[i]){
          length[i] = max(length[i], length[j]+1);
        }
      }
    }

    int res = INT_MIN;
    for(int i = 0;i<n;i++){
      res = max(res, length[i]);
    }
    cout<<res<<"\n";
    return 0;
  }