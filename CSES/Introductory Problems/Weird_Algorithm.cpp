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
 
    cout<<n<<" ";
 
    while(n > 1){
        if(n % 2 != 0){
            n = (n * 3) + 1;
            cout<<n<<" ";
        }else{
            n = n / 2;
            cout<<n<<" ";
        }
    }
 
    cout<<endl;
}
