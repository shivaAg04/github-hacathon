#include <bits/stdc++.h> 

// #include<iostream>

using namespace std;

#define sum(x) ((n-1)*n)/2

typedef long long ll;
//typedef pair<int,int> pr;

int zz=1000000000;
bool compare(pair<ll,ll> &a, pair<ll,ll> &b)
{
    return (a.second < b.second);
}


double p=3.14159265358979323846;

double area(int r)
{
    return p*r*r;
}

int abs(int a,int b)
{
    if(a>b)
    return a-b;
    else
    return b-a;
}

int tell(int d,int k)
{
    return __gcd(d,k);
    
}

void solve()
{
    ll n,s=0,i;
    cin>>n;
    vector<pair<pair<ll,ll>,ll>> a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i].first.first>>a[i].first.second;
        a[i].second=a[i].first.first-a[i].first.second;
    }
    sort(a.begin(),a.end());
    for(i=0;i<n;i++)
    {
        if(i<n/2)
        s=s+a[i].first.first;
        else
        s=s+a[i].first.second;
    }
    cout<<s<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t=1;
    //cin>>t;
    while(t--)
    {
       solve();
    }    
}