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
        int n, x; cin>>n>>x;

        vector<int>v(n);

        for(int i = 0; i<n; i++) cin>>v[i];

        sort(v.rbegin(), v.rend());

        int i = 0, j = n - 1, cnt = 0;

        while(i <= j){
            if(v[i] + v[j] > x){
                i++;
            }else{
                i++;
                j--;
            }
            cnt++;
        }

        //if(i == j) cnt++;

        cout<<cnt<<endl;
    //}
}
