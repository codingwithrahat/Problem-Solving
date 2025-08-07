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
 
    set<int>st;
 
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        st.insert(x);
 
    }
 
    cout<<st.size()<<endl;
 
    
 
    
}
