#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    long n=0,k=1,max=0;
	    cin>>n;
	    cin>>k;
	    for(int i=2;i<=k;i++){
	        if (max<n%i)
	            max=n%i;
	    }
	    cout<<max<<endl;
	    t--;
	}
	return 0;
}
