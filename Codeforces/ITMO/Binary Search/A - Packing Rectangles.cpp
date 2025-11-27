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

int check(int w, int h, int mid, int n){
      
      //after remove oveflow, in test case 4 get runtime cz n / 0 = inf 
      if(mid / w == 0 || mid / h == 0) return false;
      
      //(mid / w) * (mid/h) >= n
      //to avoid overflow
      if((mid / w) >= ceil((n * 1.0) / (mid/ h))) return true;
      //need ceil value
      return false;
}

int32_t main(){

   druto();

//    int t; cin>>t;
//    while(t--){
         int h, w, n; cin>>w>>h>>n;

         int l = 1, r = max(w, h) * n;

         int ans = -1;


         while(l <= r){
            int mid = l + (r - l) / 2;

            
            if(check(w, h, mid, n)){
                  ans = mid;
                  r = mid - 1;
            }else{
                  l = mid + 1;
            }
         }
       

         cout<<ans<<endl;
       
       
//    }
}
