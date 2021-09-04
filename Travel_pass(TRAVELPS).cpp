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
	    int n,a,b;
	    string s;
	    cin>>n>>a>>b;
	    cin>>s;
	    int time_spend=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            time_spend+=a;
	        }
	        else{
	            time_spend+=b;
	        }
	    }
	    cout<<time_spend<<endl;
	}
	return 0;
}
