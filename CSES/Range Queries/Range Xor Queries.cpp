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

   int n, q; cin>>n>>q;
   
   vector<int>v(n + 1);

   for(int i = 1; i<=n; i++) cin>>v[i];

   vector<int>p(n + 1);

   p[0] = 0;

   for(int i = 1; i<=n; i++){
      p[i] = p[i - 1] ^ v[i];
   }

   while(q--){
      int a, b ; cin>>a>>b;


      cout<<(p[b] ^ p[a - 1])<<endl;  //() is important cz << higher precedence than ^ 
   }

}
