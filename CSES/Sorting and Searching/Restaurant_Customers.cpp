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

    vector<pair<int, int>>p;

    for(int i = 0; i<n; i++){
        int x, y; cin>>x>>y;
        
        p.pb({x, 1});
        p.pb({y, -1});


    }

    sort(p.begin(), p.end());


    int mx = INT_MIN, cnt = 0;

    for(int i = 0; i<p.size(); i++){

        cnt += p[i].ss;

        mx = max(mx, cnt);
    }

    cout<<mx<<endl;
}
