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

   sort(s.begin(), s.end());

   string p;

   map<char, int>mp;


   for(int i = 0; i<s.size(); i++){
      mp[s[i]]++;
   }


   int cnt = 0;
    char m;

   for(auto & u : mp){
      if(u.second % 2 != 0){
         cnt++;
         m = u.first;
      }
   }

  

  

   if(cnt > 1){
      cout<<"NO SOLUTION\n";
   }else{

      for(int i = 0; i<s.size() - 1; i++){
         if(s[i] == s[i + 1]){
            p.pb(s[i]);
            i++;
         }
      }
      string t = p;

      reverse(t.begin(), t.end());

      if(cnt == 1) p.pb(m);

      p = p + t;

      cout<<p<<endl;
   }


}
