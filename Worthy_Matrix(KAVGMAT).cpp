#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    long long k,n,m,i,j,var,order;
	    order=1;
	    long long count=0;
	    double avg;
	    cin>>n>>m>>k;
	    long long matrix[n+1][m+1];
	    for(i=0;i<n+1;i++){
	        for(j=0;j<m+1;j++){
                if(i==0 || j==0)
                matrix[i][j]=0;
                else{
                    cin>>matrix[i][j];
	           // if(matrix[i][j]>=k)
	           //     count++;
                    matrix[i][j]=matrix[i][j]+matrix[i-1][j]+matrix[i][j-1]-matrix[i-1][j-1];
                }
	        }
	    }
	    var=n;
    while(order<var+1){
         i=order;
         j=m;
        while(i<n+1){
            long long x=i-order+1;
            long long y=j-order+1;
            avg=matrix[i][j]-matrix[x-1][j]-matrix[i][y-1]+matrix[x-1][y-1];
            if(avg/(order*order)<k)
                i=i+1;
            else{
                long long start=order;
                long long end=m;
                long long ans=0;
                while(start<=end){
                    long long mid=(start+end)/2;
                    x=i-order+1;
                    y=mid-order+1;
                     avg=matrix[i][mid]-matrix[x-1][mid]-matrix[i][y-1]+matrix[x-1][y-1];
                     if(avg/(order*order)<k)
                        start=mid+1;
                        else{
                            ans=mid;
                            end=mid-1;
                            // break;
                        }
                    }
                count+=m-ans+1;
                i=i+1;
            }
        }
        order++;
    }
	     cout<<count<<endl;
	    t--;
	}
	return 0;
}