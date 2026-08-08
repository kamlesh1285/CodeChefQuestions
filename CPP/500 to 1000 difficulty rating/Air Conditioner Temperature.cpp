// Air Conditioner Temperature

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	cin>>T;
	while (T--) {
	    int A, B, C;
	    cin>>A>>B>>C;
	    
	    
	    if (max(A, C) <= B) {
	        cout<<"YES"<<"\n";
	    }
	    else {
	        cout<<"NO"<<"\n";
	    }
	}

}
