/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
int vis[mx];
vector<long long int> adj[mx];
long long int par[mx];
void bfs(int s)
{
    vis[s]=1;
    queue<long long int> q;
    q.push(s);
    while(!q.empty())
    {
        long long int u=q.front();
        cout<<u<<" ";
        q.pop();
          for(auto v:adj[u]){
               if(vis[v]==0){
                    vis[u]=vis[v]+1;
                    par[v]=u;
                    q.push(v);
               }
          }
    }
}
int main()
{
    optimize();
    long long int t,i,n,e,u,v;
    cin>>n>>e;
    for(i=1; i<=e; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



