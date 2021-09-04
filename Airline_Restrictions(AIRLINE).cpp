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
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    if(a>e && b>e && c>e){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    if(a+b<=d){
	        if(c<=e){
	            cout<<"YES"<<endl;
	            continue;
	        }
	    }
	    if(a+c<=d){
	        if(b<=e){
	            cout<<"YES"<<endl;	        
	            continue;
	    }
	}
	    if(b+c<=d){
	        if(a<=e){
	            cout<<"YES"<<endl;
	            continue;
	        }
	    }
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}
