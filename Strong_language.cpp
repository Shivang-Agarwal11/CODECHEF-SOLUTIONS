#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int repeat=k;
	    for(int i=0;i<n;i++){
	       if(repeat<=0)
	        break;
	        if(s.at(i)=='*'){
	            repeat--;
	        }
	        else{
	            repeat=k;
	        }
	    }

	    if(repeat<=0)
	        cout<<"YES"<<endl;
	   else
	        cout<<"NO"<<endl;
	    t--;
	}
	return 0;
}
