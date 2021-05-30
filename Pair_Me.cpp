#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x+y)==z || (x+z)==y || (y+z)==x)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	
	return 0;
}
