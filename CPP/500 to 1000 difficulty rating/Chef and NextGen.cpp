// Chef and NextGen

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while (T--) {
	    int A, B, X, Y;
	    cin>>A>>B>>X>>Y;
	    if ((A*B)<=(X*Y)) {
	        cout<<"YES\n";
	    }
	    else {
	        cout<<"NO\n";
	    }
	}

}
