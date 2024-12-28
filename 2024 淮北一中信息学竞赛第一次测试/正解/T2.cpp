#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,maxn=1;
	cin>>n;
	string maxs="",all[n];
	for(int i=0;i<n;i++){
		cin>>all[i];
	}
	for(int i=0;i<n;i++){
		if(all[i].length()>maxs.length()){
			maxs=all[i];
			maxn=i+1;
		}
		else if(all[i]>maxs&&all[i].length()==maxs.length()){
			maxs=all[i];
			maxn=i+1;
		}
	}
	cout<<maxs<<" "<<maxn;
	return 0;
}