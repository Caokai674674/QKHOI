#include<iostream>
using namespace std;
int main(){
	string n;
	cin>>n;
	int num[8];
	for(int i=0;i<8;i++){
		num[i]=(int)n[i]-48;
	}
	char ans[8][10];
	for(int i=0;i<8;i++){
		for(int j=0;j<10;j++){
			ans[i][j]='_';
		}
	}
	for(int i=0;i<8;i++){
		ans[i][num[i]]='#';
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<8;j++){
			cout<<ans[j][i];
		}
		cout<<endl;
	}
}