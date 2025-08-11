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

    int n; cin>>n;

    vector<int>v(n);

    for(int i = 0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    if(n % 2 != 0){
        int m = n / 2;

        int ans = 0;

        for(int i = 0; i<n; i++){
            ans += abs(v[m] - v[i]);
        }

        cout<<ans<<endl;
    }else{
        int m = n / 2;
        int m2 = (n / 2) - 1;

        int ans = 0, ans2 = 0;

        for(int i = 0; i<n; i++){
            ans += abs(v[m] - v[i]);
            ans2 += abs(v[m2] - v[i]);
        }

        cout<<min(ans, ans2)<<endl;

    }
}
