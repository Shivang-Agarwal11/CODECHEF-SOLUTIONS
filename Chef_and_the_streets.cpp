#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int profit=0;
	    
	    cin>>n;
	    while(n--){
	        int s,v,p;
	        cin>>s>>p>>v;
	       int curr_profit=(p/(s+1))*v;
	        if(profit<=curr_profit)
	        profit=curr_profit;
	    }
	    cout<<profit<<endl;
	}
	return 0;
}