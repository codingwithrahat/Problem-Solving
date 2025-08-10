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

    while(q--){
        int x; cin>>x;

        int l = 0, r = n - 1;
        bool flag = false;

        while(l <= r){
            int mid = l + (r - l) / 2;

            if(v[mid] == x){
                cout<<"YES\n";
                flag = true;
                break;
            }else if(v[mid] < x){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        if(!flag) cout<<"NO\n";
    }

}
