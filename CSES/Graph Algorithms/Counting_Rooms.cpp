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
 
int mx = 1000 + 7;
 
vector<vector<char>>grid;
vector<vector<bool>>vis;
 
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
 
int n, m; 
 
bool valid(int x, int y){
   return (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y]);
}
 
void dfs(int x, int y){
   vis[x][y] = true;
 
 
   for(int i = 0; i<4; i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
 
      if(valid(nx, ny) && grid[nx][ny] != '#') dfs(nx, ny);
   }
}
 
int32_t main(){
      
   druto();
 
   // int t; cin>>t;
   // while(t--){
      cin>>n>>m;
      
 
      grid.assign(n, vector<char>(m));
 
      for(int i = 0; i<n; i++){
         for(int j = 0; j<m; j++){
            cin>>grid[i][j];
 
         }
      }
 
      vis.assign(n, vector<bool>(m, false));
 
      int cnt = 0;
 
      for(int i = 0; i<n; i++){
         for(int j = 0; j<m; j++){
            if(grid[i][j] == '.' && !vis[i][j]){
               dfs(i, j);
               cnt++;
            }
         }
      }
 
      cout<<cnt<<endl;
   // }
}
