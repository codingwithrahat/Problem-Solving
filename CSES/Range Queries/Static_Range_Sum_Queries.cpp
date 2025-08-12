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

    vector<int>v(n);

    for(int i = 0; i<n; i++) cin>>v[i];

    vector<int>p(n);

    p[0] = v[0];

    for(int i = 1; i<n; i++){
        p[i] = p[i - 1] + v[i];
    }

    while(q--){
        int a, b; cin>>a>>b;

        if(a == 1){
            cout<<p[b - 1]<<endl;
        }

        else cout<<p[b - 1] - p[a - 2]<<endl;
    }
}
