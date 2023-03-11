#include <bits/stdc++.h>
using namespace std;
int LIS(vector<int> A){
  if (A.size() == 0)
    return 0;
  vector<int> t;
  t.push_back(A[0]);
  int len = 1;
  for (int i = 1; i < A.size(); i++){
    if (A[i] < t[0]) t[0] = A[i];
    else if (A[i] > t[len - 1]){
      len++;
      t.push_back(A[i]);
    }
    else{
      int s = 0, e = len - 1;
      int mid;
      int k;
      while (s <= e){
        mid = e + (e - s)/2;
        if (t[mid] < A[i])
          s = mid + 1;
        else{
          k = mid;
          e = mid - 1;
        }
      }
      t[k] = A[i];
    }
  }
  return len;
}
int main()
{
  int n;
  cin >> n;
  vector<int> A;
  for (int i = 0; i < n; i++){
    int x;
    cin >> x;
    A.push_back(x);
  }
  cout << LIS(A);
  return 0;
}
