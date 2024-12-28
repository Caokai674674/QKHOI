#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	freopen("T2.in","r",stdin);
	freopen("T2.out","w",stdout);
	int T;
	cin>>T;
	string s;
	int num;
	while(T--){
		cin>>s;
		num=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(')num++;
			if(s[i]==')')num--;
			if(num<0)break;
		}
		if(num!=0)cout<<0<<endl;
		else cout<<1<<endl;
	}
}