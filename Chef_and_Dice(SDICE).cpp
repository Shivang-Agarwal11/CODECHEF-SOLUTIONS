#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    long long n;
	    int remaining=0;
	    cin>>n;
	    long long max_sum=0;
	    max_sum=(n/4)*(11*4);
	    remaining=n%4;
	    if(n>=4){
	         if(remaining==0)
	            max_sum=max_sum+4*4; 
	       if(remaining==1)
	            max_sum=max_sum+4*3+20;
	       if(remaining==2)
	            max_sum=max_sum+4*2+18*2;
	       if(remaining==3)
	            max_sum=max_sum+4+18+15+18;
	        cout<<max_sum<<endl;
	        
	    }
	    else{
	       // remaining=n%4;
	       int max_sum2=0;
	        if(remaining==1)
	            max_sum2=20;
	        if(remaining==2)
	            max_sum2=18*2;
	       if(remaining==3)
	            max_sum2=15+18*2;
	    cout<<max_sum2<<endl;
	    }
	    t--;
	}
	return 0;
}
