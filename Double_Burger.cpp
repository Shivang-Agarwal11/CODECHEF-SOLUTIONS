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
	   ll x,y;
	   cin>>x;
       cin>>y;
	   if(y%x>0){
	       cout<<-1<<endl;
	   }
	   else{
	   ll c=0;
	       y/=x;
	       for(ll i=61;i>0;--i){
	           ll value=((ll) 1<<i)-1;
	           if(value<=y){
	           y-=value;
	           c+=i+1;
	           }
	       }
	   if(!y)
	   cout<<c-1<<endl;
	   else
	   cout<<-1<<endl;
	   }
	}
	return 0;
}
