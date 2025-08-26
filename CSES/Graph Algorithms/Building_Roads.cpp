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
 
void dfs(int x){
	vis[x] = true;
 
	for(auto &u : lis[x]){
		if(!vis[u]) dfs(u);
	}
}
 
int32_t main(){
		
   druto();
 
	   cin>>n>>m;
 
	   lis.assign(n + 1, vector<int>());
	   vis.assign(n + 1, false);
 
	   for(int i = 0; i<m; i++){
	   		int x, y; cin>>x>>y;
 
	   		lis[x].pb(y);
	   		lis[y].pb(x);
	   }
 
	   vector<int>a;
	   
 
	   for(int i = 1; i<=n; i++){
	   		if(!vis[i]){
	   			a.pb(i);
	   			dfs(i);
	   		}
 
	   }
 
	   cout<<a.size() - 1<<endl;
 
	   for(int i = 0; i<a.size() - 1; i++){
	   		cout<<a[i]<<" "<<a[i + 1]<<endl;
	   }
 
}
