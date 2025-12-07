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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define deci(x) cout << fixed << setprecision(x);


const int INF = 1e18;
const int mod = 1e9 + 7;


int32_t main(){

   druto();

   

   int n, k; cin>>n>>k;

   int x, a, b, c; cin>>x>>a>>b>>c;

   vector<int>v(n);

   v[0] = x;

   for(int i = 1; i<n; i++){
      v[i] = (a * v[i - 1] + b) % c;
   }
   

   // for(auto & u : v) cout<<u<<" ";

   int xr = 0;
   for(int i = 0; i<k; i++){
      xr ^= v[i];

   }

   int ans = xr;

   for(int i = k; i<n; i++){
      xr = (xr ^ v[i]) ^ v[i - k];
      ans ^= xr;
   }

   cout<<ans<<endl;




}
