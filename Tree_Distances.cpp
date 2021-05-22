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
	    int x,y;
	    cin>>x>>y;
	    int n=1,i;
	    while(n*n<x+y){
	        n++;
	    }
	    if(n*n!=x+y){
	        cout<<"NO"<<"\n";
	        continue;
	    }
	  if(n==1){
	      if(x==1){
	          cout<<"YES"<<"\n";
	          cout<<1<<"\n";
	      }
	      else
	      cout<<"NO"<<"\n";
	      continue;
	  }
	  int even=1,odd=n-1;
	  bool pass=false;
	  while(odd>=1){
	      int odd_pairs=even*odd*2;
	      if(odd_pairs==y){
	      pass=true;
	      break;
	  }
	  odd--;
	  even++;
	  }
	  if(!pass)
	  cout<<"NO"<<"\n";
	  else{
	      cout<<"YES"<<"\n";
	      cout<<n<<"\n";
	      for(int i=1;i<=odd;i++){
	          cout<<1<<" "<<i+1<<"\n";
	      }
	      for(int i=1;i<even;i++){
	          cout<<2<<" "<<odd+i+1<<"\n";
	      }
	  }
	}
	return 0;
}
