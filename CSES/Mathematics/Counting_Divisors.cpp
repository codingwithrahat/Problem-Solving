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

const int MX = 1e6 + 6;

int32_t main(){

   druto();

   int n; cin>>n;

   vector<int>d(MX);

   for(int i = 1; i<=MX; i++){
      for(int j = i ; j<=MX; j+=i){
         d[j]++;
      }
   }

   while(n--){
      int x; cin>>x;

      cout<<d[x]<<endl;
   }

}
