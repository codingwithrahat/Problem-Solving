#include <bits/stdc++.h>
using namespace std;


#define int long long

int32_t main() 
{
    int n, m; cin>>n>>m;
    
    int a[n], b[m];
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<m; i++) cin>>b[i];
    
  
    int count = 0;
    int l = 0, r = 0;
    
    while(r < m && l < n){
      if(a[l] < b[r]){
        l++;
      }else if(a[l] > b[r]){
        r++;
      }else{
        int cnt1 = 0, cnt2 = 0;
        
        int v = a[l];
        
        while(l < n && v == a[l]){
          cnt1++;
          l++;
        }
        
        while(r < m && v == b[r]){
          cnt2++;
          r++;
        }
        
        count = count + cnt1 * cnt2; 
        
      }
    }
    
    cout<<count<<endl;
    
    
}
