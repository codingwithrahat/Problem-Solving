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
   int sum = 0;
   for(int i = 1; i<=n; i++) sum += i;
 
 
   int r = sum / 2;
 
   //cout<<r<<sum/2<<endl;
 
   if(r != sum - r || n == 1 || n == 2) cout<<"NO\n";
   else{
      cout<<"YES\n";
      int curSum = 0;
 
      vector<int>f, s;
 
      for(int i = n; i>=1; i--){
         if(curSum + i <= r){
            curSum += i;
            f.pb(i);
         }else s.pb(i); 
      }
 
 
      cout<<f.size()<<endl;
 
      for(auto &u : f) cout<<u<<" ";
      cout<<endl;
 
      cout<<s.size()<<endl;
      for(auto &u : s) cout<<u<<" ";
      cout<<endl;
 
   }
}
