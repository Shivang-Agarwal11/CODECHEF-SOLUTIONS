#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define inti long long int
#define vi vector<inti>
#define pb push_back
using namespace std;

vector<vi> adj;
inti x=0;
inti n=0;
vi loc;
vector<pair<inti,inti>> child;
vector<inti> suma;
void dfs(inti cur=1,inti par=0){
    for(inti neigh : adj[cur]){
        if(neigh==par)
        continue;
        dfs(neigh,cur);
    }
    child.clear();
    for(inti n:adj[cur]){
    if(n!=par)    
    child.emplace_back(suma[n],n);
    }
    sort(rbegin(child),rend(child));
    inti i=1;
    for(auto j:child){
        loc[j.second]=i++;
        // cout<<j.second;
    }
    for( inti node:adj[cur]){
        if(node!=par){
        suma[cur]=suma[cur]+loc[node]*suma[node];
        }
    }
}

int main() {
	// your code goes here
	inti t;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    adj.resize(n+1);
	    for(inti i=1;i<=n;i++){
	        vi().swap(adj[i]);
	    }
	    suma.assign(n+1,1);
	    loc.assign(n+1,0);
	    for(inti i=0;i<n-1;++i){
	        inti u,v;
	        cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
	    }
	    dfs();
	    cout<<suma[1]%1000000007*x%1000000007<<endl;
	}
	return 0;
}
