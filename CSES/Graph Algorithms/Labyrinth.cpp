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
vector<vector<char>>grid;
vector<vector<bool>>vis;
vector<vector<char>>p;
 
bool flag;
 
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
 
bool valid(int x, int y){
   return (x >= 0 && y >= 0 && x < n && y < m && !vis[x][y]);
}
 
string s = "";
 
void bfs(int x, int y){
 
   vis[x][y] = true;
 
   
 
   queue<pair<int, int>>q;
 
   q.push({x, y});
 
   while(!q.empty()){
      int tx = q.front().ff;
      int ty = q.front().ss;
 
      q.pop();
 
      if(grid[tx][ty] == 'B'){
         flag = true;
         return;
      }
 
 
      for(int i = 0; i<4; i++){
         int nx = tx + dx[i];
         int ny = ty + dy[i];
 
         
 
 
 
         if(valid(nx, ny) && grid[nx][ny] != '#'){
 
            if(i == 0) p[nx][ny] = 'U';
            if(i == 1) p[nx][ny] = 'D';
            if(i == 2) p[nx][ny] = 'L';
            if(i == 3) p[nx][ny] = 'R';
            
 
            vis[nx][ny] = true;
 
            q.push({nx, ny});
 
         }
      }
   }
 
 
 
}
 
 
int32_t main(){
      
   druto();
 
   cin>>n>>m;
 
   grid.assign(n, vector<char>(m));
   vis.assign(n, vector<bool>(m, false));
   p.assign(n, vector<char>(m, 'h'));
 
   int si, sj, ei, ej;
 
   for(int i = 0; i<n; i++){
      for(int j = 0; j<m; j++){
         cin>>grid[i][j];
 
         if(grid[i][j] == 'A'){
            si = i;
            sj = j;
         }
 
         if(grid[i][j] == 'B'){
            ei = i;
            ej = j;
         }
      }
   }
 
 
   bfs(si, sj);
 
   while(p[ei][ej] != 'h'){
      if(p[ei][ej] == 'D'){
         ei--;
         s += 'D';
      }else if(p[ei][ej] == 'L'){
         ej++;
         s += 'L';
      }else if(p[ei][ej] == 'U'){
         ei++;
         s += 'U';
      }else{
         ej--;
         s += 'R';
      }
   }
   reverse(s.begin(), s.end());
   if(flag){
         cout<<"YES\n";
         cout<<s.size()<<endl;
         cout<<s<<endl;
   }
   else cout<<"NO\n";
 
 
 
}
