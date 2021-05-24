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
	   int x1,y1,x2,y2;
	   cin>>x1>>y1>>x2>>y2;
	   int x=x1;
	   int y=y1;
	   int i=0;
	   int sum=0;
	   int max_sum=0;
	   while(x1--){
	       i++;
	       sum+=i;
	   }
	       y1--;
	   while(y1--){
	       sum+=i;
	       i++;
	   }
	       //cout<<sum<<endl;
	       max_sum+=sum;
	   while(x2>x){
	       i++;
	       sum+=i;
	       max_sum+=sum;
	       x2--;
	   }
	       //cout<<sum<<endl;
	   while(y2>y){
	       sum+=i;
	       max_sum+=sum;
	       i++;
	       y2--;
	   }
	   cout<<max_sum<<endl;
	}
	return 0;
}
