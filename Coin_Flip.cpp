#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int G;
	    int i,n,q;
	    cin>>G;
	    while(G--){
	    cin>>i>>n>>q;
	    if(n%2==0)
	    cout<<n/2<<endl;
	    else{
	        if(i==1){
	            if(q==1){
	                cout<<(n-1)/2<<endl;
	            }
	            else{
	                cout<<(n+1)/2<<endl;
	            }
	        }
	        else{
	            if(q==1){
	                cout<<(n+1)/2<<endl;
	            }
	            else{
	                cout<<(n-1)/2<<endl;
	            }
	        }
	    }
	    }
	}