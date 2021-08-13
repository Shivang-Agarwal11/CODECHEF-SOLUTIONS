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
	   int g1,s1,b1,g2,s2,b2;
	   cin>>g1>>s1>>b1>>g2>>s2>>b2;
	   if((g1+s1+b1)>(g2+s2+b2)){
	       cout<<1<<endl;
	   }
	   else if((g1+s1+b1)<(g2+s2+b2)){
	       cout<<2<<endl;
	   }
	   else{
	       if(g1>g2){
	           cout<<1<<endl;
	       }
	       else if(g1<g2){
	           cout<<2<<endl;
	       }
	       else{
	           if(s1>s2){
	               cout<<1<<endl;
	           }
	           else if(s1<s2){
	               cout<<2<<endl;
	           }
	           else{
	               if(b1>b2){
	                   cout<<1<<endl;
	               }
	               else{
	                   cout<<2<<endl;
	               }
	           }
	       }
	   }
	}
	return 0;
}
