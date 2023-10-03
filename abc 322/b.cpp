#include<bits/stdc++.h>
#include<algorithm>
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"
#define enter cout<<"\n"
#define endl "\n"
#define all(a) a.begin(),a.end()
#define pb push_back
#define int long long
using ll=long long;
using ull=unsigned long long;
using namespace std;

bool sortbycond(const pair<int,int>& a,const pair<int,int>& b)
{
    if(a.first!=b.first)
    {
        return (a.first<b.first);
    }
    else
    {
       return (a.second>b.second);
    }
}

int solve()
{
    int n,m;
    string s,t;
    cin>>n>>m>>s>>t;
    bool pre=false,suf=false;
    if(t.substr(0,n)==s)
    {
        pre=true;
    }
    if(t.substr(m-n,n)==s)
    {
        suf=true;
    }
    if(pre&&suf)
    {
        return 0;
    }
    else if(pre)
    {
        return 1;
    }
    else if(suf)
    {
        return 2;
    }
    return 3;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<"\n";
    return 0;
}