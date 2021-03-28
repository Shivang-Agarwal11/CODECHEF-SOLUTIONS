#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t>0){
        int u,v,a,s;
        cin>>u;
        cin>>v;
        cin>>a;
        cin>>s;
        if(u==v){
            cout<<"Yes"<<endl;
        }
        else{
            double val=0;
            double cal=v;
            val=u*u-2*a*s;
            val=sqrt(val);
            if (val>cal)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
        t--;
    }
	return 0;
}
