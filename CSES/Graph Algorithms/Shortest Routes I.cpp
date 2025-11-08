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

const int INF = 1e18;
const int mod = 1e9 + 7;

vector<vector<pair<int, int>>>lis;
vector<int>vis;
vector<int>dis;

void dijkstra(int src){
    set<pair<int, int>>s;

    s.insert({0, src});
    dis[src] = 0;

    while(!s.empty()){
        auto it = *s.begin();

        int node = it.ss;
        int node_dis = it.ff;

        s.erase(s.begin());

        if(vis[node]) continue;

        vis[node] = true;

        

        for(auto &u : lis[node]){
            int child = u.ff;
            int child_w = u.ss;

            if(dis[child] > node_dis + child_w){
                dis[child] = node_dis + child_w;
                s.insert({dis[child] , child});
            }
        }
    }
}

int32_t main(){

   druto();

   int n, m; cin>>n>>m;

   lis.assign(n + 1, vector<pair<int, int>>());
   vis.assign(n + 1, false);
   dis.assign(n + 1, INF);

   for(int i = 1; i<=m; i++){
        int u, v, w;
        cin>>u>>v>>w;

        lis[u].pb({v, w});
   }

   dijkstra(1);


   for(int i = 1; i<=n; i++){
        cout<<dis[i]<<" ";
   }

   cout<<endl;
}
