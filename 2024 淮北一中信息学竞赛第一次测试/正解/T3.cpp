#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int c[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		c[i]=a[i]+b[n-i-1];
	}
	sort(c,c+n);
	for(int i=0;i<n;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}