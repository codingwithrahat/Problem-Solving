#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin>>n>>m;
  int a[n], b[m];
  for(int i = 0; i<n; i++) cin>>a[i];
  for(int i = 0; i<m; i++) cin>>b[i];
  
  int l = 0, r = 0;
  
  vector<int>v;
  
  while(l < n && r < m){
    if(a[l] < b[r]){
       v.push_back(a[l]);
       l++;
    }else{
      v.push_back(b[r]);
      r++;
    }
  }
  
  while(l < n){
    v.push_back(a[l]);
    l++;
  }
  while(r < m){
    v.push_back(b[r]);
    r++;
  }
    
  for(auto & u : v) cout<<u<<" ";
  cout<<endl;
    
  
}
