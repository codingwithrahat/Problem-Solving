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
 
    //int t; cin>>t;
    //while(t--){
        int n; cin>>n;
 
        if(n == 2 || n == 3){
            cout<<"NO SOLUTION\n";
            return 0;
        }
 
 
 
        vector<int>e, o;
 
        for(int i = 1; i<=n; i++){
            if(i % 2 != 0) o.pb(i);
            else e.pb(i);
        }
 
        for(auto &u : e) cout<<u<<" ";
        for(auto &u : o) cout<<u<<" ";
        cout<<endl;
 
 
    //}
}
