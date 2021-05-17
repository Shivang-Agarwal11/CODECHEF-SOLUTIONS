#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    string express;
	    ll count1=0;
	    ll count2=0;
	    ll pre=0;
	    cin>>express;
	    for(ll i=0;i<express.length();i++){
	        if(express[i]=='<'){
	            count1++;
	        }
	        else{
	            count1--;
	            if(count1<0)
	            break;
	            count2++;
	            if(count1==0){
	                pre=count2;
	            }
	            }
	        }
	    
	    cout<<pre*2<<endl;
	}
	return 0;
}
