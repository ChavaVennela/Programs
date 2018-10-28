#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i;
	string s, s1, a, a1;
	cin>>s>>s1;
	cin>>n;
	cout<<s<<" "<<s1<<endl;
	for(i=0; i<n; i++){
		cin>>a>>a1;
		if(a == s){
			s =a1;
		}
		else{
			s1 = a1;
		}
		cout<<s<<" "<<s1<<endl;
	}
	return 0;
}
