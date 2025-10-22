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

   int n, q; cin>>n>>q;
   vector<vector<char>>v(n + 1, vector<char>(n + 1));

   vector<vector<int>>v2(n + 1, vector<int>(n + 1));
   vector<vector<int>>p(n + 1, vector<int>(n + 1, 0));



   for(int i = 1; i<=n; i++){
      for(int j = 1; j<=n; j++){
         cin>>v[i][j];

         int cnt = 0;

         if(v[i][j] == '*') v2[i][j] = 1;
         else v2[i][j] = 0;

         p[i][j] = v2[i][j] + p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1];
      }
   }


   // int q; cin>>q;

   while(q--){
      int a, b, c, d; cin>>a>>b>>c>>d;
      // a--;b--;c--;d--; 1 based indexing

      cout<<p[c][d] - p[a - 1][d] - p[c][b - 1] + p[a - 1][b - 1]<<endl;


   }

}
