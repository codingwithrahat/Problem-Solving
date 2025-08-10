#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m; cin>>n>>m;
    
    int a[n], b[m];
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<m; i++) cin>>b[i];
    
    vector<int>v;
    
    int l = 0, r = 0;
    
    while(r < m && l < n){
      if(a[l] < b[r]){
        l++;
      }else{
        v.push_back(l);
        r++;
      }
    }
    
    while(r < m){
      v.push_back(l);
      r++;
    }
    
    for(auto &u : v) cout<<u<<" ";
    cout<<endl;
}
