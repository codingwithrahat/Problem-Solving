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

    for(int i = 0; i<n; i++){
        cin>>v[i];

    }

    int mx = INT_MIN, curSum = 0;

    for(int i = 0; i<n; i++){

        curSum += v[i];

        mx = max(mx, curSum);

        if(curSum < 0) curSum = 0;


    }

    cout<<mx<<endl;

}
