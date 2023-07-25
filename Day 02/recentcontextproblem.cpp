#include <iostream>
using namespace std;

int main() {
    int a;
	cin>>a;
	int b,s,l;
	string temp;
	while(a--){
	    cin>>b;
	    for(int i=0;i<b;i++){
	        cin>>temp;
	        if(temp=="START38")
	        s++;
	         if(temp=="LTIME108")
	        l++;
	        
	    }
	    cout<<s<<" "<<l<<endl;
	    s=0;
	    l=0;
	    
	}
	// your code goes here
	return 0;
}
