/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e5+123;
bool vis[mx];
vector<int> adj[mx];
void dfs(int n)
{
    vis[n]=1;
    for(auto u:adj[n])
    {
        if(vis[u]==0)
        {
            dfs(u);
        }
    }
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,e,u,v;
    cin>>n>>e;
    for(i=1; i<=e; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
//    for(i=1; i<=n; i++)
//    {
//        cout<<"Adjacent nodes of node "<<i<<" : ";
//        for(auto u:adj[i])
//        {
//            cout<<u<<" ";
//        }
//        cout<<endl;
//    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




