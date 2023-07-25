#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a,b,temp;
	while(n!=0){
	    cin>>a;
	    cin>>b;
	   // cout<<"A:"<<a<<"B:"<<b;
	    if((a+b)>6){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    n--;
	}
	return 0;
}
