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

   string s; cin>>s;

   vector<string>v;

   sort(s.begin(), s.end());

   v.pb(s);
   
   while(next_permutation(s.begin(), s.end())){
      // cout<<s<<endl;
      v.pb(s);
   }

   cout<<v.size()<<endl;

   for(auto & u : v) cout<<u<<endl;


}
