#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int last;
	cin>>last;
	int m;
	int ans=0;
	for(int i=1;i<n;i++){
		cin>>m;
		if(last>m)ans++;
		last=m;
	}
	cout<<ans;
}
