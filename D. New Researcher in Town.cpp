//BISMILLAHIR RAHMANIR RAHIM///
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 100000
int main()
{
IOS;
ll t,n,p,q,s,sum;
cin>>t;
while(t--)
{
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        cin>>p>>q;
        v.push_back(p-q);
    }
ll cnt=0;
sum=0;
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
s=accumulate(v.begin(),v.end(),0);
if(s<30)
    cout<<"-1"<<endl;
else
{
for(ll i=0;i<n;i++)
{
    if(sum<30)
    {
  cnt++;
    sum+=v[i];
    }
    else
        break;
}
cout<<cnt<<endl;
}
}
return 0;
}
