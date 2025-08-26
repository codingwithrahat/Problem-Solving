#include<bits/stdc++.h>
using namespace std;
 
#define druto() ios::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define ff first
#define ss second
#define int long long
#define double long double
#define pb push_back
#define ll long long
 
const int mod = 1e9 + 7;
 
 
int32_t main(){
      
   druto();
 
   int n, ans = 1; cin>>n;
 
   for(int i = 1; i<=n; i++){
      ans = ((ans % mod) * 2) % mod;
   }
 
   cout<<ans<<endl;
}
