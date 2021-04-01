#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n,m;
	    int plot=2;
	    cin>>n;
	    cin>>m;
	    int min;
	    if(n<m)
	      min=n;
	    else
	      min=m;
	    int j=0;
	    for(j=min;j>=1;j--){
            if (n%j==0 && m%j==0){
                plot=j;
                break;
            }
	    }
        
	    cout<<(n/plot)*(m/plot)<<endl;
	    t--;
	}
	return 0;
}
