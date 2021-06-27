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
	    string n;
	    cin>>n;
	    string s;
	    s=n;
	    if(s[0]!='1'){
	        cout<<"1"+s<<endl;
	    }
	    else{
	        cout<<s.substr(0,1)+"0"+s.substr(1)<<endl;
	    }
	}
	return 0;
}
