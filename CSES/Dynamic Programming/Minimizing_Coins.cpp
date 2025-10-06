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
const int inf = 1e18 + 1;
 
int f(int x, vector<int>&v, vector<int>&dp){
   if(x == 0) return 0;
   if(x < 0) return inf;
 
   if(dp[x] != -1) return dp[x];
 
   int ans = inf;
 
   for(auto &u : v){
      ans = min(ans, 1 + f(x - u, v, dp));
   }
 
   dp[x] = ans;
 
   return dp[x];
}
 
 
int32_t main(){
      
   druto();
 
   int n, x; cin>>n>>x;
 
   vector<int>v(n);
 
 
   for(int i = 0; i<n; i++) cin>>v[i];
 
   vector<int>dp(x + 1, -1);
 
   int ans = f(x,  v, dp);
 
   if(ans == inf) cout<<-1<<endl;
   else cout<<ans<<endl;
 
 
}
