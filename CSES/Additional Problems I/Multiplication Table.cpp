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

bool check(int mid, int n){

      int cnt = 0;
      for(int i = 1; i<=n; i++){
            cnt += min(n, mid / i);

            if(cnt >= (((n * n)  + 1) / 2)) return true;
      }

      return false;
}

int32_t main(){

   druto();

//    int t; cin>>t;
//    while(t--){
         int n; cin>>n;

         int l = 1, h = n * n;

         int ans = -1;


         while(l <= h){
            int mid = l + (h - l) / 2;

            
            if(check(mid, n)){
                  ans = mid;
                  h = mid - 1;
            }else{
                  l = mid + 1;
            }
         }
       

         cout<<ans<<endl;
       
       
//    }
}
