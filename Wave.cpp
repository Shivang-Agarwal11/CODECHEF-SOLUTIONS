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
	ll n,q;
	cin>>n>>q;
 vector<ll> arr;
	for (ll i=0;i<n;i++){
	    int m;
	    cin>>m;
	   arr.pb(m);
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<q;i++){
	    int query;
	    cin>>query;
	    ll pos=lower_bound(arr.begin(),arr.end(),query)-arr.begin();
	    if(pos<n && arr[pos]==query)
	    cout<<0<<endl;
	    else if(pos%2==0)
	    cout<<"POSITIVE"<<endl;
	    else
	    cout<<"NEGATIVE"<<endl;
	}
	
}
