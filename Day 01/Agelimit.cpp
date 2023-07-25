#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b,c;
	while(t--){
	    cin>>a>>b>>c;
	    if((c>=a)&&(c<b)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
