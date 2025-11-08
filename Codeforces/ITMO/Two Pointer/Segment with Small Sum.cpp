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

  //  int t; cin>>t;
  //  while(t--){
      int n, k; cin>>n>>k;

      vector<int>v(n);
      
      for(int i = 0; i<n; i++) cin>>v[i];

      int sum = 0;

      int j = 0, mx = INT_MIN;

      for(int i = 0; i<n; i++){
        sum += v[i];

        while(sum > k){
          sum -= v[j];
          j++;
        }

        mx = max(mx, i - j + 1);
      }

      cout<<mx<<endl;
  //  }
}
