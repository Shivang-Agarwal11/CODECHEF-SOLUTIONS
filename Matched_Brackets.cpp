#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
 

int main(){
	int n;
	cin>>n;
	vector<int>depth,length;
	int l=0,r=0,d=0;
	int a,len=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a==1){
			l++;
			len++;
			length.push_back(len);
			d++;
			depth.push_back(d);
		}
		else if(a==2){
			r++;
			if(l==r){
				len++;
				length.push_back(len);
				len=0;
			}
			else{
				len++;
				length.push_back(len);
			}
			d--;
			depth.push_back(d);
		}
	}
	int max_index=max_element(depth.begin(),depth.end())-depth.begin();
	int max=*max_element(depth.begin(),depth.end());
	cout<<max<<" ";
	cout<<(max_index)+1<<" ";
	int max_length=*max_element(length.begin(),length.end());
	cout<<max_length<<" ";
	int mlen_index=max_element(length.begin(),length.end())-length.begin()-max_length+1;
	cout<<(mlen_index)+1<<endl;
	
	return 0;
}
	
