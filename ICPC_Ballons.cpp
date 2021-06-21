#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
using namespace std;

vector<vi> adj;
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll c=0;
	    ll val=7;
	    for(ll i=0;i<n;i++){
	        ll m;
	        cin>>m;
	        if(val>0){
	        if(m<=7){
	            c++;
	            val--;
	        }
	        else
	        c++;
	    }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
