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
 
   int n; cin>>n;
 
 
   vector<int>dp(n + 1, 0);
 
   dp[0] = 1;
 
 
   for(int i = 1; i<=n; i++){
      for(int j = 1; j<=6; j++){
         if(i - j >= 0) dp[i] = (dp[i] + dp[i - j]) % mod;
      }
   }
 
   cout<<dp[n]<<endl;
}
