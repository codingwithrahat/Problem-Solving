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

    int q; cin>>q;    

    while(q--){
        int l, r; cin>>l>>r;

        int lb = lower_bound(v.begin(), v.end(), l) - v.begin();
        int ub = upper_bound(v.begin(), v.end(), r) - v.begin();

        cout<<ub - lb<<" ";
    }

    cout<<endl;

}
