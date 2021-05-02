#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int sum=0;
	    int f=0;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        sum+=a;
	        if(a==2)
	        f=1;
	    }
	    if(sum%2==0)
	    cout<<"0"<<endl;
	    else if(f==1)
	    cout<<"1"<<endl;
	    else
	    cout<<"-1"<<endl;
	    
	}
	return 0;
}
