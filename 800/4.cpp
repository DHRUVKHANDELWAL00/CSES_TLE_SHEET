#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool flag=0;
		if(n%3==0){
			flag=1;
		}
		if(flag==1){
			cout<<"Second"<<endl;
		}else{
			cout<<"First"<<endl;
		}

	}
}


