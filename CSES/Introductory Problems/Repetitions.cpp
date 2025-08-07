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
 
    string s; cin>>s;
    int cnt = 0, mx = 0;
    for(int i = 0; i<s.size() - 1; i++){
        if(s[i] == s[i + 1]){
            cnt++;
            mx = max(mx, cnt);
        }else{
            cnt = 0;
        }
 
    }
 
    cout<<mx + 1<<endl;
}
