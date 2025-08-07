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
 
    int cnt = 0;
 
    for(int i = 1; i<n; i++){
        if(v[i - 1] > v[i]){
            cnt += (v[i - 1] - v[i]);
            v[i] = v[i] + (v[i - 1] - v[i]);
        }
    }
    cout<<cnt<<endl;
 
}
