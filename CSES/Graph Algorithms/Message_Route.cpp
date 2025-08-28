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
 
int n, m;
vector<vector<int>>lis;
vector<bool>vis;
vector<int>par;
 
 
void bfs(int x){
   vis[x] = true;
 
 
   queue<int>q;
 
   q.push(x);
 
   while(!q.empty()){
      int tx = q.front();
 
      q.pop();
 
      for(auto &u : lis[tx]){
         if(!vis[u]) {
            q.push(u);
            vis[u] = true;
            par[u] = tx;
         }
      }
   }
}
 
 
int32_t main(){
      
   druto();
 
   cin>>n>>m;
 
   vis.assign(n + 1, false);
   lis.assign(n + 1, vector<int>());
   par.assign(n + 1, -1);
 
   for(int i = 0; i<m; i++){
      int x, y; cin>>x>>y;
 
      lis[x].pb(y);
      lis[y].pb(x);
   }
 
   bfs(1);
 
   // for(int i = 1; i<=n; i++){
   //    cout<<par[i]<<" ";
 
   // }
 
   // cout<<endl;
 
   if(!vis[n]){
      cout<<"IMPOSSIBLE\n";
      return 0;
   }
 
   vector<int>v;
   
   for(int i = n; i != -1; i = par[i]){
      v.pb(i);
   }
 
   reverse(v.begin(), v.end());
 
   cout<<v.size()<<endl;
   for(auto &u : v) cout<<u<<" ";
   cout<<endl;
 
}
