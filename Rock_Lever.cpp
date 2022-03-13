#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,q,s;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>q;
        map<ll,ll>arr;
        for(ll j=0;j<q;j++){

            cin>>s;
            ll x;
            x = int(log2(s)); // calculating the leftmost set bit
            
            arr[x]+=1; //storing total number which have same leftmost set bit
            
        }
        
        ll Total=0;
        ll b;
        for(auto i:arr){
            b=i.second;
            Total=Total+(b*(b-1)/2);
        }
        cout<<Total<<endl;
    }
    return 0;
}


























