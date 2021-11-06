#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
lli mod=1e9+7;
lli n,m,vis[100000];
vector<lli> adj[100000],dist;


void bfs(lli s){
    dist.assign(n+1,-1);
    queue<lli> q;
    dist[s]=0;
    q.push(s);
    while(!q.empty()){
        lli u=q.front();
        q.pop();
        for(auto v: adj[u]){
            dist[v]=dist[u]+1;
            q.push(v);
        }
    }
}

void solve(){
  cin>>n>>m;
  for(lli i=0;i<m;i++){
    lli u,v;
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  bfs(1);
}


int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
    lli t=1;
    // cin>>t;
    while(t--){
     solve();
    }
    return 0;
}