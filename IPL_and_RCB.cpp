#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int x,y;
	    int point=0;
	    cin>>x;
	    cin>>y;
	    int i=0;
	    if(x<=y)
	        cout<<0<<endl;
	    else{
	    cout<<x-y<<endl;
	    }
	    t--;
	}
	return 0;
}
