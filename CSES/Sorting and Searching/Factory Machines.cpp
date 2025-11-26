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

bool isCan(vector<int>v, int curt, int t){

      int cnt = 0;

      for(auto & u : v){
            cnt += (curt / u);

            if(cnt >= t) return true;
      }

      return false;
}

int32_t main(){

   druto();

//    int t; cin>>t;
//    while(t--){
         int n, t; cin>>n>>t;

         vector<int>v(n);

         for(int i = 0; i<n; i++) cin>>v[i];

         int l = 1;
         int h = *max_element(all(v)) * t;
            int ans = -1;
      
         while(l <= h){
            int mid = l + (h - l) / 2;
            if(isCan(v, mid, t)){
                  ans = mid;
                  // cout<<mid<<endl;
                  h = mid - 1;
            }else{
                  l = mid + 1;
            }
         }


         cout<<ans<<endl;
       
       
       
//    }
}
