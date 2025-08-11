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

    int n, x; cin>>n>>x;
    vector<pair<int, int>>v(n);

    for(int i = 0; i<n; i++){
        cin>>v[i].ff;
        v[i].ss = i;
    }

    sort(v.begin(), v.end());    
    int i = 0, j = n - 1;
    bool flag = false;

    while(i < j){
        if(v[i].ff + v[j].ff == x){
            flag = true;
            cout<<v[i].ss + 1<<" "<<v[j].ss + 1<<endl;
            break;
        }else if(v[i] .ff+ v[j].ff > x){
            j--;
        }else{
            i++;
        }
    }

    if(!flag) cout<<"IMPOSSIBLE\n";

}
