#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t>0){
        int n,x,s,r,pre_rat=0;
        cin>>n;
        cin>>x;
        for(int i=0;i<n;i++){
            cin>>s;
            cin>>r;
            if ((r>pre_rat) && (x>=s)){
                pre_rat=r;

            }
        }
        cout<<pre_rat<<endl;
        t--;
    }
	return 0;
}
