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
    int n,k,p,temp,cost=0;
    cin>>n>>k>>p;
    vector<int>total(k,0);
    vector<vector<int>>vec;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vec.push_back({temp});
        for(int j=0;j<k;j++)
        {
            cin>>temp;
            vec[i].push_back(temp);
            total[j]+=temp;
        }
    }
    for(int i=0;i<k;i++)
    {
        if(total[i]<p)
        {
            return -1;
        }
    }
    return 0;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<"\n";
    return 0;
}