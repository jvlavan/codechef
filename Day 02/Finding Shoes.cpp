#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	int n,m,s,t;
	while(a--){
	 cin>>n>>m;
	 if(n<=m){
	     s=n;
	 }
	else{
	    t=n-m;
	    s=t+n;
	}
	cout<<s<<endl;
	    
	}
	return 0;
}
