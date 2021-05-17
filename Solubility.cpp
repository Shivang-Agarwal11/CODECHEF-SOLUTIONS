#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    int x,a,b;
	    cin>>x>>a>>b;
	    cout<<(a+(100-x)*b)*10<<endl;
	}
	return 0;
}
