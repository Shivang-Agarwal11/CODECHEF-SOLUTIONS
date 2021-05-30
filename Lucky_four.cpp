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
	    ll n;
	    cin>>n;
	    int c=0;
	   while(n>0){
	       int d=n%10;
	       if(d==4)
	       c++;
	       n=n/10;
	   }
	   cout<<c<<endl;;
	}
	return 0;
}
