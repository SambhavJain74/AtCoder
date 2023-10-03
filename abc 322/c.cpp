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

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>vec(n);
    for(int i=0;i<m;i++)
    {
        cin>>vec[i];
    }
    int i=1,j=0;
    while(i<=n)
    {
        while(vec[j]>=i)
        {
            cout<<vec[j]-i<<"\n";
            i++;
        }
        j++;
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}