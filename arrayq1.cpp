#include<iostream>
//#include<climits>
using namespace std;
int main(){
	int i,n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	int mx= INT_MIN;
	for(i=0;i<n;i++){
//		if(a[i]>max)
		    mx=max(a[i],mx);
		cout<<mx<<" ";	
	}
}
