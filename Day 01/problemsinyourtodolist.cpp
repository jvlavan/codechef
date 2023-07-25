#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	int b,n,c;
	
	while(a--){
	    cin>>n;
	    c=0;
	    for(int i=0;i<n;i++){
	        cin>>b;
	        if(b>=1000)
	        c++;
	    }
	    cout<<c<<endl;
	
	    
	}
	return 0;
}
