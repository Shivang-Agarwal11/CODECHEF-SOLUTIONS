#include <iostream>
#include <unordered_map>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
using namespace std;

vector<vi> adj;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,m;
	    ll left=-1,right=-1;
	    cin>>n>>m;
	    unordered_map<ll,ll>mp;
	    ll stations[n];
	    for(ll i=0;i<n;i++){
	        cin>>stations[i];
	    }
	    ll travellers[m];
	    for(ll i=0;i<m;i++){
	        cin>>travellers[i];
	    }
	    for(ll i=0;i<n;i++){
	        if(i==0){
	            mp[i]=0;
	        }
	        else if(stations[i]>0){
	            mp[i]=0;
	        }
	        else
	        mp[i]=INT_MAX;
	    }
	    for(ll i=0;i<n;i++){
	        if(stations[i]==1){
	            left=i;
	        }
	            if(left!=-1){
	                if(stations[i]==0){
	            mp[i]=min(mp[i],i-left);
	                
	            }
	        }
	    }
	    for(ll i=n-1;i>=0;i--){
	        if(stations[i]==2){
	            right=i;
	        }
	            if(right!=-1){
	                if(stations[i]==0){
	            mp[i]=min(mp[i],right-i);
	                
	            }
	        }
	    }
	    for(ll j=0;j<m;j++){
	        if((mp[travellers[j]-1])!=INT_MAX)
	        cout<<mp[travellers[j]-1]<<' ';
	        else
	        cout<<-1<<' ';
	    }
	    cout<<"\n";
	}
	return 0;
}
