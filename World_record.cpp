#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    float k1,k2,k3,v,record;
	    int n;
	    cin>>k1>>k2>>k3>>v;
	    record=(100/(k1*k2*k3*v));
	    record=(int)(record * 100 + .5);
	    record=(float)(record/100);
	    record=(record*100);
	   // cout<<record;
	    if(record<958)
	        cout<<"YES"<<endl;
	   else 
	        cout<<"NO"<<endl;
	   t--;
	}
	return 0;
}
