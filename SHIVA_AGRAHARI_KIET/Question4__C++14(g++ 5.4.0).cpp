// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
int main() {
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll mod = 1000000007;
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        ll s=1;
        for(ll i=l;i<=r;i++)
        {
            for(ll j=i+1;j<=r;j++)
            {
                s *= ((a[i]^a[j])%mod);

            }
        }
        cout<<s<<endl;
    }
}