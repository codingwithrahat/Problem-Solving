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
        int n, m, k; cin>>n>>m>>k;

        vector<int>v(n), a(m);

        for(int i = 0; i<n; i++){
            cin>>v[i];
        }

        for(int i = 0; i<m; i++){
            cin>>a[i];
        }

        sort(v.begin(), v.end());
        sort(a.begin(), a.end());

        int i = 0;
        int j = 0;
        int cnt = 0;

        while(i < v.size() && j < a.size()){
            if(v[i] >= (a[j] - 5) && v[i] <= (a[j] + 5)){
                cnt++;
                i++;
                j++;
            }else{
                if(v[i] < a[j] - 5){
                    i++;
                }else{
                    j++;
                }
            }
        }

        cout<<cnt<<endl;

    //}
}
