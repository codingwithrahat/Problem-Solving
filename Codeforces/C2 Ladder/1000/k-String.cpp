#include<bits/stdc++.h>
using namespace std;

#define druto() ios::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define pb push_back
#define ll long long

const int mod = 1e9 + 7;

int main(){

    druto();

    //int t; cin>>t;
    //while(t--){
        int k; cin>>k;
        string s; cin>>s;

        map<char, int>mp;

        for(int i = 0; i<s.size(); i++){
            mp[s[i]]++;
        }     

        for(auto & u : mp){
            if(u.second % k != 0){
                cout<<-1<<endl;
                return 0;
            }
        }
        string ans;

        //else{
            for(auto & u : mp){
                int t = u.second / k;
                for(int i = 0; i<t; i++){
                    ans += u.first;
                }

            }
            for(int i = 0; i<k; i++) cout<<ans;

            cout<<endl;
        //}  


    //}
}
