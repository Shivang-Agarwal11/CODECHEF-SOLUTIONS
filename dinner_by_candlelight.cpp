#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t>0){
        int a,y,x;
        cin>>a;
        cin>>y;
        cin>>x;
        int n;
        int candle_before=x*a;
        if (a<=y)
            cout<<candle_before+1<<endl;
        else
            cout<<x*y<<endl;
        t--;
    }
	return 0;
}
