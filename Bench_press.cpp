#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,w,wr;
	    cin>>n>>w>>wr;
	    ll l=0,r=0;
	   // ll we;
	    ll sum=0;
	   // int flag=0;
        // ll left=0,right=0;
        ll A[n];
        unordered_map<int,int> mp;
	    for(ll i=0;i<n;i++){
	        cin>>A[i];
	        mp[A[i]]++;
	    }
	    if(w<=wr){
	        cout<<"YES"<<endl;
	    }
	    else{
	        sum+=wr;
	        for(ll i=0;i<n;i++){
	            ll c=mp[A[i]];
	            if(c>=2){
	                if(c%2==0)
	                sum=sum+c*A[i];
	                else
	                sum=sum+(c-1)*A[i];
	            }
	            mp[A[i]]=0;
	        }
	        if(w<=sum)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	        
	            
	        
	        }
	    }
	
	return 0;
}
