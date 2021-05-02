#include <iostream>
#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll L;
	    cin>>L;
	    string s;
	    int flag=0;
	    cin>>s;
        if(s[0]=='1')
        flag=1;
        else{
	    ll z=0,o=0;
	    for(ll i=0;i<L;i++){
	        if(s[i]=='0')
	        z++;
	        else
	        o++;
	        if(o>=z){
	           flag=1;
	           break;
	        }
	    }
        }
	    if(flag==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
